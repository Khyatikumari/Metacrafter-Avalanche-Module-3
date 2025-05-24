import java.util.Arrays;

class Solution {
    public int threeSumClosest(int[] nums, int target) {
            Arrays.sort(nums); 

                    int closestSum = nums[0] + nums[1] + nums[nums.length - 1];

                            int minDiff = Math.abs(closestSum - target);

                                    for (int i = 0; i < nums.length - 2; i++) {
                                                int left = i + 1; 
                                                            int right = nums.length - 1; 

                                                                        while (left < right) {
                                                                                        int sum = nums[i] + nums[left] + nums[right];
                                                                                                        int diff = Math.abs(sum - target); 

                                                                                                                        if (diff < minDiff) {
                                                                                                                                            minDiff = diff;
                                                                                                                                                                closestSum = sum;
                                                                                                                                                                                }

                                                                                                                                                                                                if (sum < target) {
                                                                                                                                                                                                                    left++;
                                                                                                                                                                                                                                    } else {
                                                                                                                                                                                                                                                        right--;
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                                                    return closestSum; 
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                        }