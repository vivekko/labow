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
    string a;cin>>a;
    int n = a.size();
    bool palin = true;
    for(int i=0;i<n/2;i++){
        if(a[i] != a[n-1-i]){
            palin = false;
        }
    }
    if(palin){
        cout<<0<<"\n";
        return;
    }
    bool left = false,right = false;
    for(int i=1;i<n;i++){
        if(a[0] == a[i]){
            left = 1;
        }
    }
    for(int i=0;i<n-1;i++){
        if(a[n-1] == a[i]){
            right = 1;
        }
    }
    // if(left && !right){
    //     cout<<2<<"\n";
    //     cout<<"R "<<2<<"\n";
    //     cout<<"R "<<n + (n - 3)<<"\n";
    //     return;
    // }
    //  if(right && !left){
    //     cout<<2<<"\n";
    //     cout<<"L "<<n-1<<"\n";
    //     cout<<"L "<<2<<"\n";
    //     return;
    // }
 
        cout<<3<<"\n";  
        cout<<"L 2\n";
        cout<<"R "<<2<<"\n";
        cout<<"R "<<n+n-1<<"\n";
        
    
    

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
// uvuxuvu
//  csadasca
// abac 
//    babac
//    babaca 
//    babacacabab
// caccccaccccac
// dasca
