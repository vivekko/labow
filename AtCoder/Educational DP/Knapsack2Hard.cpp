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
const int lim = 1e6;
int cache[101][lim];
v a,b;
int w;

int knapsackHard(int value,int index){
    if(index == a.size()-1){
        if(value == 0)  return 0;
        return INT32_MAX;
    }
    if(cache[index][value]!=-1) return cache[index][value];
    int left = knapsackHard(value,index+1);
    int right = INT32_MAX;
    if(b[index]<=value) right = knapsackHard(value - b[index],index + 1);
    return cache[index][value] = min(left,right);
}   
int go(int maxValue){
    for(int i=maxValue;i>=0;--i){
        if(knapsackHard(i,0) <= w)    return i;
        return 0;
    }
}
void solve(){
    int n;
    cin>>n>>w;
    memset(cache,-1,sizeof(cache));
    a.resize(n);
    b.resize(n);
    int maxValue = 0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        maxValue += b[i];
    }
    cout<<go(maxValue);

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
