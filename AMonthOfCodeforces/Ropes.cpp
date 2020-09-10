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

int n,k;
vector<int> arr;

bool isgood(double x){
    int s = 0;
    for(int i=0;i<n;i++){
        s+=floor(arr[i]/x);
    }
    if(s >= k)
        return true;
    return false;
}

void solve(){
    cin>>n>>k;
    arr.resize(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    double l = 0;
    double r= 10000000;
    for(int i=0;i<100;i++){
        double m = (l+r)/2;
        if(isgood(m))
            l = m;
        else 
            r = m;
}
    cout<<l;
}

int main(){
int t=1;
// cin>>t;
while(t-->0)
    solve();
return 0;
}