from math import inf
MOD = int(1e9+7)

class Solution:
    def maxProductPath(self, grid: List[List[int]]) -> int:
        prev_row = [[inf, -inf] for _ in grid[0]]
        if grid[0][0] < 0:
            prev_row[0][0] = grid[0][0]
        else:
            prev_row[0][1] = grid[0][0]
        for j in range(1, len(grid[0])):
            val = grid[0][j]
            if val < 0:
                prev_row[j][0] = val * prev_row[j-1][1]
                prev_row[j][1] = val * prev_row[j-1][0]
            elif val > 0:
                prev_row[j][0] = val * prev_row[j-1][0]
                prev_row[j][1] = val * prev_row[j-1][1]
            else:
                prev_row[j][0] = 0
                prev_row[j][1] = 0
        current_row = [[inf, -inf] for _ in grid[0]]
        for i in range(1, len(grid)):
            #print(prev_row)
            row = grid[i]
            val = row[0]
            if val < 0:
                current_row[0][0] = val * prev_row[0][1]
                current_row[0][1] = val * prev_row[0][0]
            elif val > 0:
                current_row[0][0] = val * prev_row[0][0]
                current_row[0][1] = val * prev_row[0][1]
            else:
                current_row[0][0] = val * 0
                current_row[0][1] = val * 0
            for j in range(1, len(row)):
                val = row[j]
                if val == 0:
                    current_row[j][0] = 0
                    current_row[j][1] = 0
                else:
                    most_neg = min(prev_row[j][0], current_row[j-1][0])
                    most_pos = max(prev_row[j][1], current_row[j-1][1])
                    if val < 0:
                        current_row[j][0] = val * most_pos
                        current_row[j][1] = val * most_neg
                    else:
                        current_row[j][0] = val * most_neg
                        current_row[j][1] = val * most_pos
            next_row = prev_row
            prev_row = current_row
            current_row = next_row
        #print(prev_row)
        prod = prev_row[-1][1]
        if prod >= 0:
            return prod % MOD
        return -1