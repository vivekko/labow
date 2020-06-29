#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long t;
    cin>>t;
    while(t-->0){
    long long count=0;
        long long ret;
        cin>>ret;
        // int i=0;
        while(ret!=1){
            if( ret%6 == 0)
                ret/=6;
            else
            {
                ret*=2;
                if(ret%6!=0){
                    count = -1;
                    cout<<count<<endl;
                    break;
                }

            }
            count++;
        }
        if(count!=-1)
        cout<<count<<endl;
    }
    
    
    return 0;
}
