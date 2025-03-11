class Solution {
        public int maxArea(int[] height) {
                int maxArea = 0;
                        int curArea = 0;
                                int left = 0;
                                        int right = height.length -1;
                                                while(left<right){
                                                            curArea = (right-left) * Math.min(height[right], height[left]);
                                                                        maxArea = Math.max(curArea, maxArea);
                                                                                    if(height[right] > height[left]){
                                                                                                    left++;
                                                                                                                }
                                                                                                                            else{
                                                                                                                                            right--;
                                                                                                                                                        }
                                                                                                                                                                }
                                                                                                                                                                        return maxArea;
                                                                                                                                                                            }
                                                                                                                                                                            }
