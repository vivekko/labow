#include <iostream>
int fib[INT16_MAX];
int fiba(int n);
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans = fiba(n);
    cout<<ans;
    return 0;
}

int fiba(int n){
    if(n<=1)
        return fib[n] = n;
    else if(fib[n]!=0)
        return fib[n];
    else
        return fib[n] = fiba(n-1) + fiba(n-2);
}

//  it  is  clear  thatrecomputations do occur.  But even more critical is the runtime: each 
//  nodebranches off into the next tier with two branches, implyingO(2n)over thetotal process, which hasntiers.
// Fortunately, we can invoke memoization to solve this problem and simply storeFibonacci numbers as we 
// calculate them in a separate array,
//  Time and Space is O(n) in this case

