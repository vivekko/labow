#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    int j;
    int i;
    int sum = 0;
    int count=0;
    for( i= 1;i<=t*3;i++){
        // int sum =0 ;
        cin>>j;
        sum = sum + j;
        if(i%3==0){
            if(sum>1)
                count++;
            sum = 0;
        }
    }
    cout<<count;
    return 0;
}
