#include <iostream>
#include <math.h>
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m,n;
    cin>>m;
    int marr[m];
    for(int i=0;i<m;i++)
        cin>>marr[i];
    cin>>n;
    int narr[n];
    for(int i=0;i<n;i++)
        cin>>narr[i];

    int mx = -1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(marr[i]!=0)
                if(narr[j]%marr[i] == 0)
                {
                    mx = max(mx,(narr[j]/marr[i]));
                }
        }
    }
    // cout<<mx<<endl;
    int count = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if(marr[i]!=0)
                if(narr[j]%marr[i] == 0)
                    if(narr[j]/marr[i]==mx)
                        count++;
                
        

    cout<<count;
    return 0;
}