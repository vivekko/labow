#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t-->0)
    {
        int n;
        cin>>n;
        int ath[1000];
        for(int i=0;i<n;i++)
        {
            cin>>ath[i];
        }
        int aa=0;
        int bb=0;
        int min = ath[0];
        for(int i=0;i<n;i++){
            for (int j = i+1; j < n; j++)
            {
                /* code */
                if(ath[i]-ath[j]<min)
                    {
                        aa=ath[i];
                        bb = ath[j];
                    }
            }
    
        }
          cout<<abs(aa-bb);
    }
    

  
    
    return 0;
}
