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
    int r,c,s;
    cin>>r>>c>>s;
    vector<string> arr(r);

    for(int i=0;i<r;i++){
        cin>>arr[i];
    }
    int ans = 0;
    bool cant = false;
  
    // if( c>=1)
    for(int k = 0;k<r;k++){
        int l = 0;
        int ri = s-1;
        int star = 0;
    
        for(int i=0;i<s;i++){
            if(arr[k][i] == '*')    ++star;
        }
        while(ri<c){
            if(star == 0)   ans++;
            if(arr[k][l] == '*')    --star;
            ++l;
            ++ri;
            if(arr[k][ri] == '*')   ++star;
        }
    }

    

    if(r >= s)
     for(int k = 0;k<c;k++){
        int l = 0;
        int ri = s-1;
        int star = 0;
    
        for(int i=0;i<s;i++){
            if(arr[i][k] == '*')    ++star;
        }
        while(ri<r){
            if(star == 0)   ans++;
            if(arr[l][k] == '*')    --star;
            ++l;
            ++ri;
            if(ri>=r){
                break;
            }
            if(arr[ri][k] == '*')   ++star;
        }
    }

    if(s == 1){
        ans/=2;
    }
    cout<<ans<<"\n";
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
