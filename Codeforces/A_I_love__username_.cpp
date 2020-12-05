#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,val,maax;
    cin>>n;
    cin>>maax;
    int ret=0;
    int miin = maax;
    for(int i=1;i<n;i++)
    {
        cin>>val;
        if(val>maax){
            maax = val;
            ret++;
        }
        else if(val<miin)
        {
            miin = val;
            ret++;
        }

    }
    cout<<ret;
    
    return 0;
}
