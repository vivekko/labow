#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long int n,m,a;
    cin>>n;
    cin>>m>>a;
    unsigned long long int cr=0,cc=0;
    unsigned long long int rem = m%a;
    if(rem>0)
        cr = m/a + 1;
    else
        cr = m/a;
    rem = n%a;
    if(rem>0)
        cc = n/a + 1;
    else
        cc=n/a;
    unsigned long long ans = cc*cr;
    cout<<(ans);
    return 0;
}