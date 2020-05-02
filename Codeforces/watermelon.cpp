#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int c=0;
    int m;
    // if(n%2==0)
       m = n/2;

    for(int i=2;i<= n/2 ;i+=2){
        for(int j=2;j<=n ;j+=2)
            {
                if(i+j==n){
                    c++;
                    cout<<"YES";

                    return 0;
                    // cout<<"("<<i<<","<<j<<")"<<endl;
                }
            }
    }
    // cout<<c<<endl;
    // if(c==0)
    //     cout<<"NO";
    // else if(c>1)
    //     cout<<"YES";
    // else
        cout<<"NO";
    return 0;
}

// 2
// 2 4 6 8 10 12 14 16    (2,14)
// 4
// 2 4 6 8 10 12 14 16    (4,12)
// 6
// 2 4 6 8 10 12 14 16    (6,8)
// 8
// 2 4 6 8 10 12 14 16   (8,6)
// 10
// 2 4 6 8 10 12 14
// 12
// 2 4 6 8 10 12 14
// 14
// 2 4 6 8 10 12 14
// 
