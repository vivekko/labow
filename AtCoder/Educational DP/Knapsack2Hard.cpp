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
v weight,value;
int n;
// const int inf = (1e9);
const int limit = 1e9;
// vector<vector<int>> cache(100,vector<int> (inf));
int cache[limit][100];
int cache2[limit][100];
int knapsack(int index,int w){
    if(index == n-1){
        if(weight[index] <= w)  return value[index];
        else                    return 0;
    }
    if(index<=49){
        if(w<=0) return 0;
        if(cache[index][w]!=0) return cache[index][w];
        int left = INT32_MIN;
        if(w-weight[index]>=0)  left = value[index] + knapsack(index+1,w-weight[index]);
        int right = knapsack(index+1,w);
        return cache[index][w] = max(left,right);
    }
    else{
        if(w<=0) return 0;
        if(cache2[index][w]!=0) return cache2[index][w];
        int left = INT32_MIN;
        if(w-weight[index]>=0)  left = value[index] + knapsack(index+1,w-weight[index]);
        int right = knapsack(index+1,w);
        return cache2[index][w] = max(left,right);
    }
}
void solve(){
    int w;
    cin>>n>>w;
    weight.resize(n);value.resize(n);
    for(int i=0;i<n;i++){
        cin>>weight[i]>>value[i];
    }
    cout<<knapsack(0,w); 
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
