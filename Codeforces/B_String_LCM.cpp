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
    string a,b;
    cin>>a>>b;

  if(a.size()> b.size()){
                int j = min(a.size(),b.size())-1;
     for(int i= max(a.size(),b.size())-1;i>=0;i--){
           if(a[i] != b[j]){
               cout<<-1<<'\n';
               return;
           }
           if(j == 0){
               j = b.size()-1;
           }
           else
               j--;
           
            }
            if(j == b.size()-1)
            cout<<a<<'\n';
            else cout<<-1<<'\n';
        }
        else{
                int j = min(a.size(),b.size())-1;
        for(int i= max(a.size(),b.size())-1;i>=0;i--){
           if(b[i] != a[j]){
               cout<<-1<<'\n';
               return;
           }
           if(j == 0){
               j = a.size()-1;
           }
           else
               j--;
           
            }
            if(j == a.size()-1)
            cout<<b<<'\n';
            else{
                cout<<-1<<'\n';
            }
        }
   

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

// aja ajaaja
