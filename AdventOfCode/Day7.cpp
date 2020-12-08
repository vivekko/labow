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
int c = 0;
void solve(){
    vector<string> a(594);
    for(int i=0;i<594;i++)    getline(cin,a[i]);

    queue<string> b;
    set<string> checked;
    set<string> ans;
    b.push("shiny gold");
    checked.insert(b.front());
    while(!b.empty()){
        string ch = b.front();b.pop();
        for(int i=0;i<594;i++){
            
        if(a[i].find(ch)!=string::npos && a[i].find(ch)!=0){
            ++c;
            int pos = a[i].find("contain");
            ans.insert(a[i].substr(0,pos-2));
            if(checked.find(a[i].substr(0,pos-2)) == checked.end())
                b.push(a[i].substr(0,pos-2));
        }
        }
    }
    // debug(ans);
    cout<<ans.size();
}
int32_t vivek(){
NFS(NITRO);
int t=1;
// cin>>t;
while(t-->0)
    solve();
    // cout<<c<<"\n";
return 0;
}

// ___.   .__                 __          .__              __    
// \_ |__ |  | _____    ____ |  | _____  _|__|__  __ ____ |  | __
//  | __ \|  | \__  \ _/ ___\|  |/ /\  \/ /  \  \/ // __ \|  |/ /
//  | \_\ \  |__/ __ \   \___|    <  \   /|  |\   /\  ___/|    < 
//  |___  /____(____  /\___  >__|_ \  \_/ |__| \_/  \___  >__|_ \
//      \/          \/     \/     \/                    \/     \/
     