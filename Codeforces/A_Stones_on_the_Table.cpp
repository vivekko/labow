#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    char stones[n];
    for(int i=0;i<n;i++){
        cin>>stones[i];
    }
    if(n==1){
        cout<<0;
        return 0;
    }
    int count = 0;
    for(int i=0,j=1;i<n,j<n;i++,j++)
    {
        if(stones[i]==stones[j])
        {
            count++;
            i=i-1;
        }
        else{
            i=j;
            --i;
        }
    }
    cout<<count;
    return 0;
}
