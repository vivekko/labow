#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t-->0){
        int a,b,n;
        int ans1=0,ans2=0;
        cin>>a;
        cin>>b;
        cin>>n;
        ans2=0;
    while(a<=n && b<=n){
        if(a<b)
        a= a+b;
        else
        b = b+a;
        ans2++;
    }
    cout<<ans2<<endl;
    }
    
    return 0;
}
// 5 4 + 4
// 4 
// 100