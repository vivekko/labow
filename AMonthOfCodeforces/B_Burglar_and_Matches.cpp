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
#define int long long
#define vivek main
void solve(){
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>> p ;

    for(int i=0;i<m;i++){
        int f,s;
        cin>>f>>s;
        p.push_back(make_pair(s,f));
    }
    sort(p.begin(),p.end());
    // debug(p);
    int ans =0 ;
    // debug(45/7);
    int r = n;
    for(int i=m-1;i>=0;i--){
        if(p[i].second < r){

            ans+=p[i].second * p[i].first;
            r = r - p[i].second; 
        }
        else{
            ans+=p[i].first * r;
            r = r - r;
        }
    //    debug(ans);
    }
    // debug(ans);
    cout<<ans<<"\n";
    }

int32_t vivek(){
int t=1;
// cin>>t;
while(t-->0)
    solve();
return 0;
}