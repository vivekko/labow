class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int i,j;
            // Transpose 
            for(i=0;i<matrix.size();i++)
            {
                for(j=i;j<matrix.size();j++)
                {
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
            //Reversing each row
            for(i=0;i<matrix.size();i++)
        {
                reverse(matrix[i].begin(),matrix[i].end());
           }
       }
    };