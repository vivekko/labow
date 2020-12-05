#include <iostream>
using namespace std;

int main()
{
    // using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    int c;
    cin>>c;
    for(int i=0;i<c;i++)
    {
    cin>>a>>b;
    cout<<(a+b)<<endl;
    }
    return 0;
}
