#include <iostream>
#include<math.h>
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int temp;
    cin>>n;
    int tram[n*2];
    for(int i = 0; i < n*2;i++)
    {
        if(i%2==0)
            cin>>tram[i];
        else{
            cin>>temp;
            tram[i] = -temp;
        }
    }

    int maxc = 0;
    int maxg = 0;
    for(int i = 0; i < n*2;i++)
    {
        maxc = max(tram[i],tram[i]+maxc);
        maxg = max(maxg,maxc);
    }
    cout << maxg;
    
    return 0;
}
