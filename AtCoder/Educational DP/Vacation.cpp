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
#define all(x) (x).begin(),(x).end()
#define vec_p vector<pair<int,int>
#define v vector<int>
v a,b,c;
int n;
int Vacation(int cache[][2][2][2],int index,int swim,int bugs,int hw){
    if(index == n-1){
        int mx = max(a[index],max(b[index],c[index]));
        if(mx == a[index] && swim == 0) return a[index];
        if(mx == b[index] && bugs == 0) return  b[index];
        if(mx == c[index] && hw == 0)   return  c[index];
        if(mx == a[index])  return max(b[index],c[index]);
        if(mx == b[index])  return max(c[index],a[index]); 
        if(mx == c[index])  return max(a[index],b[index]);
    }
    if(cache[index][swim][bugs][hw] != -1)    return cache[index][swim][bugs][hw];
    int first = INT16_MIN,second = INT16_MIN,third = INT16_MIN;
    if(swim == 0)    first = a[index] +  Vacation(cache,index + 1,1,0,0);
    if(bugs == 0)    second = b[index] + Vacation(cache,index + 1,0,1,0);
    if(hw == 0)      third = c[index] +  Vacation(cache,index + 1,0,0,1);
    
    return cache[index][swim][bugs][hw] = max(first,max(second,third));
}

void solve(){
    cin>>n;
    int cache[n][2][2][2];
    a.resize(n);
    b.resize(n);
    c.resize(n);
    memset(cache,-1,sizeof(cache));
    for(int i =0;i<n;i++){
        cin>>a[i];
        cin>>b[i];
        cin>>c[i];
    }
    cout<<Vacation(cache,0,0,0,0);
}
int32_t vivek(){
    NFS(NITRO);
    int t=1;
    // cin>>t;
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
