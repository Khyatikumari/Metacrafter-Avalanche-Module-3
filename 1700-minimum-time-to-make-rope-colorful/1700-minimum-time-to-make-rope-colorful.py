class Solution:
    def minCost(self, colors: str, neededTime: List[int]) -> int:
        # Step 1: Initialize totalTime to store total minimum time required
        totalTime = 0
        
        # Step 2: Traverse through each balloon starting from index 1
        for i in range(1, len(colors)):
            
            # Step 3: Compare current balloon color with the previous one
            if colors[i] == colors[i - 1]:
                
                # Step 4: If colors are the same, remove the one with smaller neededTime
                totalTime += min(neededTime[i], neededTime[i - 1])
                
                # Keep the balloon with higher removal time for next comparison
                neededTime[i] = max(neededTime[i], neededTime[i - 1])
            
            # Step 5: If colors differ, continue to the next balloon
        
        # Step 6: Return the total time required to make the rope colorful
        return totalTime    