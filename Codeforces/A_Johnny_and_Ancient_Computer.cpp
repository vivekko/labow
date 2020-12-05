#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t-->0){
        int a,b;
        cin>>a>>b;
        int i=0;
        if(a>b)
            while(a>b){
                ++i;
                if(b<<i == a){
                    cout<<(i);
                }
            }
        else
            while(b>a){
                ++i;
                if(a<<i== b){
                    cout<<(i);
                    
                }
            }
    }
    return 0;
}
