#include <iostream>

int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    int Dima;
    int count=0;
    int sum = 0 ;
    for(int i = 0; i < n; ++i){
        cin>>Dima;
        sum = sum+Dima;
    }

    for(int i=1;i<=5;i++){
        if((sum+i)%(n+1) != 1 )
            count ++;

    }
    cout<< count;
    return 0;
}


//!  1
//!  1 2 3 4 5

//!  ( 8+i ) %  3

//!  count = 1

// 8
// 1 2 3 1 2 3 1 2 3* 1  2*  3*  1
//                 1  2  3  4  5  