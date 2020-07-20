#include <bits/stdc++.h>
using namespace std;
vector<long long> printFibb(int);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<long long> ans = printFibb(n);
        for(long long i:ans)cout<<i<<' ';
        cout<<endl;
    }
	return 0;
}
vector<long long> printFibb(int n) {
    long long fib[] = {0,1};
    vector<long long> ans;
    ans.push_back(1);
    for(int i=2;i<=n;i++){
        long long next = fib[0]+fib[1];
        ans.push_back(next);
        fib[0] = fib[1];
        fib[1] = next;
    }
    return ans;
}