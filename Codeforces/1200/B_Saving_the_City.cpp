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
    int a,b;
    cin>>a>>b;
    string val;
    cin>>val;
    int n = val.size();
    if(n == 1 ){
        if (val[0] == '1')
        cout<<1<<"\n";
        else
        cout<<0<<"\n";
        return;
    }

    int ans = 0;
    int ans1 = 0;
    int c0= 0 ;
    int c1 = 0;
    int planted  =0 ;
    for(int i=1;i<n-1;i++){
        if(val[i] == '0'){
            c0++;
        }
        if(val[i] == '1'){
            c1++;
        }
        if(val[i] == '1' && val[i-1] == '0'){
            if(c0<a ){
                // if(c0!=0)
                if(c0==0){
                    continue;
                }
                planted += c0;
                c0 = 0;
            }
        else{
           
            if(planted!=0)
                ans+= planted*b + a;
            planted = 0;
            ans += c1*a;
            c1= 0;
        }
        }
        
    }
    if(planted!=0){
        ans+=planted*b + a;
    }
    cout<<ans<<"\n";

}
int32_t vivek(){
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
