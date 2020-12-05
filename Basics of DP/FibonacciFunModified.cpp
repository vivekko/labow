#include <iostream>
int fib[2] = {0,1};
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        int next = fib[0] + fib[1];
        fib[0] = fib[1];
        fib[1] = next;
    }
    cout<<fib[1];
    return 0;
}
//!  In particular, is it really necessary to store an entire array for memoization? Itturns out we only really 
//!  need O(1)memory if we write this iteratively in bottom-up fashion and store only the last two Fibonacci numbers:
