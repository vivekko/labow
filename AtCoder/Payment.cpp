#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans = n%1000;
    if(ans == 0)
        cout<<0;
    else
        cout<<(1000-ans);
    
    return 0;
}

