#include <bits/stdc++.h> 
using namespace std; 

class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > a, int r, int c) 
    {
        vector <int> ans;
        vector<vector<int>> vis(r,vector<int>(c));
        int loop = r*c;
        int i= 0,j =0;
        while(ans.size()<loop)
            {

            while(j < c){
                if(vis[i][j] == 1){ break;}
                ans.push_back(a[i][j]);
                vis[i][j] = 1;
                ++j;
            }
            --j;
            ++i;
            if(ans.size() == r*c)   break;
            

            while(i < r){
                if(vis[i][j] == 1)  {break;}
                ans.push_back(a[i][j]);
                vis[i][j] = 1;
                ++i;
            }
            --i;
            --j;
            if(ans.size() == r*c)   break;

            while(j >= 0){
                if(vis[i][j] == 1)  {break;}
                ans.push_back(a[i][j]);
                vis[i][j] = 1;
                --j;
            }
            ++j;
            --i;
            if(ans.size() == r*c)   break;
        

            while(i >= 0){
                if(vis[i][j] == 1)  {break;}
                ans.push_back(a[i][j]);
                vis[i][j] = 1;
                --i;
            }
            if(ans.size() == r*c)   break;
            ++i;
            ++j;
        }
        return ans;
    }
};

int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}