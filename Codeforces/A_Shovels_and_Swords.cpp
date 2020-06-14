#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,a,b;
    cin>>t;
    while(t-->0){
    cin>>a>>b;
    int m = max(a,b);
    int mi = min(a,b);
    int em = 0;
    // cout<<m<<mi<<endl;
    for(int i=0;m>0||mi>1;i++){
        m=-2;
        mi=-1;
        em++;
    }
    printf("%d \n",em);
    }
    return 0;
}

// 4 4
// 2 3
// 0 2
// 
