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
    string val;
    cin>>val;
    int lc = 0,rc = 0,uc = 0,dc = 0;
    for(char c:val){
        if(c == 'L')    lc++;
        else if(c == 'R')   rc++;
        else if(c == 'U')   uc++;
        else dc++;
    }
    // if(dc == 0 || uc == 0){
    //     cout<<2<<"\n";
    //     return;
    // }
    // if(lc == 0 || rc == 0){
    //     cout<<2<<"\n";
    //     return;
    // }
    if(dc == 0 || uc == 0){
        if(lc>0 && rc>0){
            cout<<2<<"\n";
            cout<<"LR\n";
            return;
        }
        else{
            cout<<0<<"\n";
            return;
            
        }
        
    }
    if(lc == 0 || rc == 0){
        if(dc>0 && uc>0){
            cout<<2<<"\n";
            cout<<"UD\n";
            return;
        }
        else{
            cout<<0<<"\n";
            return;
        }
        
    }

    
    int ans = 2*min(lc,rc) + 2*min(uc,dc);
    cout<<ans<<"\n";
    if(ans == 2){
        if(lc>0 && rc>0)
        cout<<"LR\n";
        else
        cout<<"UD\n";
        return;
    }

    for(int i=0;i<2*min(lc,rc)/2;i++){
        cout<<"L";
    }
     for(int i=0;i<2*min(uc,dc)/2;i++){
        cout<<"U";
    }
     for(int i=0;i<2*min(lc,rc)/2;i++){
        cout<<"R";
    }
     for(int i=0;i<2*min(uc,dc)/2;i++){
        cout<<"D";
    }
   
    cout<<"\n";
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

// DDDDUUUURRRLLL


