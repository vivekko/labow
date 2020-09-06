#include <bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
long long sol(long long a,long long x,long long b,long long y,long long n){
    if(a-n >= x)
        a-=n;
    else{
        long long temp = a;
        a = x;
        b = b -(n-temp+x);
        if(b<y)
            b = y;
    }
    // debug(a);
    // debug(b);
    return a*b;
}
void solve(){
    long long a,b,x,y,n;
    cin>>a>>b>>x>>y>>n;   
    long long res = min(sol(a,x,b,y,n),sol(b,y,a,x,n));
    cout<< res<<"\n";
}
int main(){
int t;
cin>>t;
while(t-->0)
    solve();
return 0;
}