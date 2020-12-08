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
#define NFS(nitro) ios_base::sync_with_stdio(false);cin.tie(0);
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
#define int long long
#define vivek main
void solve(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &i:a)   cin>>i;
    vector<int> b = a;
    vector<int> c = a;
    vector<int> d = a;
    vector<int> e = a;
    b[0] = b[1];
    c[1] = c[0];
    d[n-1] = d[n-2];
    e[n-2] = e[n-1];
    int m = 0,mo = 0;
    for(int i=2;i<n;i++){
        m = b[0]-b[i];
        mo += abs(m);
        for(int j = i;j<n;j++){
            b[j] = b[j] + m;
        }
    }
    m = 0;
    int m1 = 0;
    for(int i=2;i<n;i++){
        m = c[0]-c[i];
        m1 += abs(m);
        for(int j = i;j<n;j++){
            c[j] = c[j] + m;
        }
    }
    m = 0;
    int m2 = 0;
    for(int i=1;i<n;i++){
        m = d[0]-d[i];
        m2 += abs(m);
        for(int j = i;j<n;j++){
            d[j] = d[j] + m;
        }
    }
    m = 0;
    int m3 = 0;
    debug(m3,e);
    for(int i=1;i<n;i++){
        m = e[0]-e[i];
        m3 += abs(m);
        for(int j = i;j<n;j++){
            e[j] = e[j] + m;
        }
        debug(m3,e);
    }
    cout<<min(mo,min(m1,min(m2,m3)))<<"\n";
}
int32_t vivek(){
NFS(NITRO);
int t;
cin>>t;
while(t-->0)
    solve();
return 0;
}

// ___.   .__                 __          .__              __    
// \_ |__ |  | _____    ____ |  | _____  _|__|__  __ ____ |  | __
//  | __ \|  | \__  \ _/ ___\|  |/ /\  \/ /  \  \/ // __ \|  |/ /
//  | \_\ \  |__/ __ \   \___|    <  \   /|  |\   /\  ___/|    < 
//  |___  /____(____  /\___  >__|_ \  \_/ |__| \_/  \___  >__|_ \
//      \/          \/     \/     \/                    \/     \/
