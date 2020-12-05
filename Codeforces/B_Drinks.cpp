#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int sum =0 ;
    for(int i=0;i<n;i++)
    {
        int h;
        cin>>h;
        sum = sum + h;
    }
    cout<<(float)sum/n;
    return 0;
}
