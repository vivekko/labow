#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t-->0){
        long long n,x;
        cin>>n>>x;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long maxc = 0;
        long long maxg = 0;
        long long sum = 0;
        long long laysmax = 0;
        for(int i=0;i<n;i++)
        {
            sum = sum + arr[i];   // 
            if(sum%x>0)
                {maxc++;
                // laysmax++;
                }
           else if(sum%x==0 && sum+arr[i+1]%x>0)
                maxc++;
            else {
                maxc=0;
                sum=arr[i];
                if(sum%x!=0)
                    maxc++;
            }

            maxg = max(maxc,maxg);
        }
        if(maxg == 0)
            cout<<"-1"<<endl;
        else {
            cout<<maxg<<endl;
        }
            
    }
    
    
    return 0;
}
