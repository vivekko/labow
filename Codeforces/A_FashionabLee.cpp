#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // if(i)
    long long t;
    cin>>t;
    while(t-->0){
        long long num;
        cin>>num;
        if(num%4==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
