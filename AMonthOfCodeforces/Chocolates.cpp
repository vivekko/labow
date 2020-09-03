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
void solve(){
    long long n;
    cin>>n;
    vector<long long> v;
    for(int i=0;i<n;i++){
        long long val;
        cin>>val;
        v.push_back(val);
    }
    long long prev = v[n-1];
    for(int i = n-2;i>=0;i--){
        if(v[i]>=prev){
            v[i] = prev -1 ;
        }
        prev = v[i];
    }
    long long sum = 0;
    for(int i=0;i<n;i++){
        if(v[i]>0)
            sum+=v[i];
    }
    cout<<sum;
   
}
int main(){
int t =1;
// cin>>t;
while(t-->0)
    solve();
return 0;
}