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
void solve(){
    int n,k;cin>>n>>k;
    string a;
    // for(int &i:a)   cin>>i;
    cin>>a;
    int toggle = 0;
    while(k-->0){
    for(int i=0;i<n;i++){
        if(a[0] == '0' && a[1] == '1'){
             a[0] = 'x';
             toggle = 1;
             continue;
        }
        if(a[n-1] == '0' && a[n-2] == '1'){ 
            a[n-1] = 'x';
            toggle = 1;
            continue;
        }

        if(a[i] == '0' && a[i+1] == '1' && (a[i-1] == '0' || a[i-1] == 'x')){
            a[i] = 'x';
            toggle = 1;
        }
        else if(a[i] == '0' && (a[i+1] == '0' || a[i+1] == 'x') && a[i-1] == '1'){
            a[i] = 'x';
            toggle = 1;
        }

    }
        if(toggle == 1){
            toggle = 0;
        } 
        else{
            break;
        }

    for(int i=0;i<n;i++){
        if(a[i] == 'x') a[i] = '1';
    }
    }
    // for(int i:a)    cout<<i<<" ";
    // cout<<'\n';
    cout<<a<<"\n";

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
