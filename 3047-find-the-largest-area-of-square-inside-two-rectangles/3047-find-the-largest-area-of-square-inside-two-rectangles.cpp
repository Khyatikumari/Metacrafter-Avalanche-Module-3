class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
        long long fLen = 0;
        for(int i = 0; i < bottomLeft.size(); i++){
            long long x1 = bottomLeft[i][0], x2 = topRight[i][0], y1 = bottomLeft[i][1], y2 = topRight[i][1];
            for(int j = i + 1; j < bottomLeft.size(); j++)
            {
                long long x3 = bottomLeft[j][0], x4 = topRight[j][0], y3 = bottomLeft[j][1], y4 = topRight[j][1];
                if(x2 > x3 && y2 > y3){
                    long long nx1 = max(x1, x3), nx2 = min(x2, x4), ny1 = max(y1, y3), ny2 = min(y2, y4);
                    long long len = min(nx2- nx1, ny2 - ny1);
                    fLen = max(len, fLen);
                }
            }
        }
        return fLen*fLen;
    }
};