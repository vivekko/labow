#include <iostream>
#include <math.h>
int gcd(int a, int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
    // return a;
    }


int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    // int m = 0;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        cout<<n/2<<endl;
        }
    
    
    return 0;
}
// 3
// 1 2 
// 1 3
// 2 3 



