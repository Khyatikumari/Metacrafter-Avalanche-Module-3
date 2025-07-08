class Solution {
public:
    int maxValue(vector<vector<int>>& events, int k) { 
        sort(events.begin(), events.end(), [](const auto& a, const auto& b) { 
            return a[1] < b[1];  // Sort by end time 
        }); 
        int n = events.size(); 
        vector<map<int, int>> dp(k + 1);  // dp[j] = map of {end time -> max value} 
        dp[0][0] = 0; 
        for (const auto& event : events) { 
            int start = event[0], end = event[1], value = event[2]; 
            for (int j = k; j > 0; --j) { 
                auto it = dp[j - 1].upper_bound(start - 1); 
                if (it != dp[j - 1].begin()) { 
                    --it; 
                    int maxVal = it->second + value; 
                    if (dp[j].empty() || dp[j].rbegin()->second < maxVal) {  
                        dp[j][end] = maxVal; 
                    } 
                } 
            } 
        } 
        int res = 0; 
        for (int j = 0; j <= k; ++j) { 
            if (!dp[j].empty()) { 
                res = max(res, dp[j].rbegin()->second); 
            } 
        } 
        return res; 
    } 
};
