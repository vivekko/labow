#include <iostream>
int main()
{
    using namespace std;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int prevSum = 1;
    int fact ;
    int ans = 0;
    for(int i=1;i<=n;i++){
        fact = prevSum * i;
        prevSum = fact;
        ans = ans + fact;
    }
    cout<<ans;
    return 0;
}
//! for n = 5 120+24+6+2+1 = 153  
//  The solution is reduced to O(n) from O(n^2) by storing prev values  
// 1!12!1×23!1×2×34!1×2×3×45!1×2×3×4×5......(n−1)!1×2×···×(n−2)×(n−1)n!1×2×. . .×(n−2)×(n−1)×n......A quick look at the color pattern above reveals something quite interesting:each factorial is just the same as the last except with the next number overmultiplied to the end. That is,n! = (n−1)!×n.Of course, this is a well-known recursive property of factorials, and manymathematically enterprising students will likely have encountered it before.Yet this is an integral insight, as we will soon see.1.3  Applying the InsightThe next step is to tie together the recursive insight and the concept ofmemoization.In particular,  each successive factorial can be computed given only theprevious. This means that we can solve the problem in merelyO(n)time if, foreach iteration, we keep track of only the previous. By memoization, we save anenormous chunk of runtime by sacrificing memory to store the previous value.Below is an intuitive implementation:cin >> n;int s = 0, prev = 1;for (int i = 1; i <= n; ++i) {prev *= i;s += prev;}cout << s <<'\n';Since we build factorials starting from the
//  bottom at 1! and working our wayup ton!, this is termedbottom-up.