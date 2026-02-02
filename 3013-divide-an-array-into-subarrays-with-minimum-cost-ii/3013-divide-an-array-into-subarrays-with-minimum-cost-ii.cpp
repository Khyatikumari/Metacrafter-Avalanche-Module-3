#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
// Hardware Sympathy:
// - Coordinate Compression to [1, N] range.
// - Dual BIT for Count and Sum.
// - O(log N) Query via Binary Lifting.
class Solution {
    int n;
    int max_rank;
    vector<int> bit_count;
    vector<long long> bit_sum;
    vector<int> sorted_values; // 0-indexed: rank 1 maps to sorted_values[0]
    void update(int idx, int count_delta, long long val_delta) {
        // Standard BIT update
        for (; idx <= max_rank; idx += idx & -idx) {
            bit_count[idx] += count_delta;
            bit_sum[idx] += val_delta;
        }
    }
    // Returns sum of k smallest elements currently in the BIT
    long long query_k_smallest(int k) {
        int idx = 0;
        int current_k = 0;
        long long current_val_sum = 0;
        
        // Find the largest index 'idx' such that prefix_count[idx] < k.
        // We accumulate the sum of these subsumed blocks.
        for (int i = 1 << (31 - __builtin_clz(max_rank)); i > 0; i >>= 1) {
            int next_idx = idx + i;
            if (next_idx <= max_rank && current_k + bit_count[next_idx] < k) {
                idx = next_idx;
                current_k += bit_count[idx];
                current_val_sum += bit_sum[idx];
            }
        }
        
        // At this point:
        // 'idx' covers all full blocks strictly before the k-th element.
        // 'current_val_sum' is the sum of all elements in those blocks.
        // 'current_k' is the count of elements in those blocks.
        // The remaining needed elements (k - current_k) must perform a partial take from the next rank.
        
        long long total_sum = current_val_sum;
        int remaining = k - current_k;
        
        if (remaining > 0) {
            // The next rank that causes the count to exceed (or equal) k is idx + 1.
            // Since sorted_values is 0-indexed, rank (idx+1) corresponds to sorted_values[idx].
            int val = sorted_values[idx]; 
            total_sum += (long long)remaining * val;
        }
        
        return total_sum;
    }
public:
    long long minimumCost(vector<int>& nums, int k, int dist) {
        n = nums.size();
        
        // 1. Coordinate Compression
        sorted_values = nums;
        sort(sorted_values.begin(), sorted_values.end());
        sorted_values.erase(unique(sorted_values.begin(), sorted_values.end()), sorted_values.end());
        max_rank = sorted_values.size();
        
        // Initialize BITs (1-based indexing)
        bit_count.assign(max_rank + 1, 0);
        bit_sum.assign(max_rank + 1, 0);
        
        auto get_rank = [&](int val) {
            return lower_bound(sorted_values.begin(), sorted_values.end(), val) - sorted_values.begin() + 1;
        };
        
        int target_k = k - 1;
        
        // 2. Fill Initial Window [1, min(1 + dist, n - 1)]
        // We skip nums[0] for the window logic as it's separate cost.
        int initial_window_end = min(1 + dist, n - 1);
        for (int i = 1; i <= initial_window_end; ++i) {
            int r = get_rank(nums[i]);
            update(r, 1, nums[i]);
        }
        
        long long min_total_cost = -1;
        
        // Check if initial window is valid (has enough elements)
        // Window size is elements indices 1 to initial_window_end.
        if (initial_window_end >= target_k) {
             min_total_cost = nums[0] + query_k_smallest(target_k);
        }
        // 3. Slide Window
        // We effectively slide the window start `i` from 2 to `n - target_k`
        // Window is `dist + 1` sized conceptually, so it tracks `[i-1, i-1+dist]`.
        // Wait, standard sliding window:
        // Window [L, R]. Move L->L+1, R->R+1.
        
        for (int i = 2; i <= n - target_k; ++i) {
            // Remove element leaving the window: nums[i-1]
            int rank_remove = get_rank(nums[i - 1]);
            update(rank_remove, -1, -nums[i - 1]);
            
            // Add element entering the window: nums[i + dist]
            int entering_idx = i + dist;
            if (entering_idx < n) {
                int rank_add = get_rank(nums[entering_idx]);
                update(rank_add, 1, nums[entering_idx]);
            }
            
            // Calculate cost
            long long current_cost = nums[0] + query_k_smallest(target_k);
            if (min_total_cost == -1 || current_cost < min_total_cost) {
                min_total_cost = current_cost;
            }
        }
        
        return min_total_cost;
    }
};