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
    int n,q;
    cin>>n>>q;
    vector<int> a(q),b(q),c(q),d(q),e(q);
    for(int i=0;i<q;i++){
        cin>>a[i]>>b[i]>>c[i];
    }
    vector<int> ans;
    int off = 0;
    int nowfree = 1;
    int j;
    for(int i=0;i<q;i++){
        for(j =0;j<i;j++)
        if(a[i] >= a[j]+c[j] && d[j]==1 && e[j]==0 ){
            nowfree = nowfree-b[j];
            e[j] = 1;
        }
    debug(a[i],nowfree,b[i]);
        if(nowfree + b[i] - 1 <= n){
        //    debug(nowfree,b[i]);
            ans.push_back((float)b[i]/2*(float)(nowfree + nowfree+b[i]-1));
            nowfree += b[i];
            d[i] = 1;
        }
        else{
            ans.push_back(-1);
            d[i] = 0;
            continue;
        }
    }
    for(int i:ans)  cout<<i<<"\n";

}
int32_t vivek(){
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
