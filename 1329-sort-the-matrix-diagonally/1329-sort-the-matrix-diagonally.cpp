class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        for(int i = 0;i<mat.size();i++)
        {
            for(int j = 0;j<mat[0].size();j++)
            {
                int a = i;
                int b = j;
                while(a>0 and b>0)
                {
                    if(mat[a][b]<mat[a-1][b-1])
                    {
                        swap(mat[a][b],mat[a-1][b-1]);
                    }
                    a--;
                    b--;
                }
            }
        }
        return mat;
        
    }
};