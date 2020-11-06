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
    int n;
    cin>>n;
    vector<int> alice(3), bob(3);
    for(int &i:alice){
        cin>>i;
    }
    string b;
    cin>>b;
    for(char c:b){
        if(c == 'S'){
            bob[0]++;
        }
        else if(c == 'R'){
            bob[1]++;
        }
        else
            bob[2]++;
    }
    int ans = 0;
    for(int i=0;i<3;i++)
     ans += min(alice[i],bob[i]);

    int count  =0 ;
    if(ans>=(n+1)/2){
        cout<<"YES\n";
        for(int i=0;i<min(alice[0],bob[0]);i++){
            cout<<"P";
        }
            count +=min(alice[0],bob[0]);
            alice[0] -=  min(alice[0],bob[0]);

        for(int i=0;i<min(alice[1],bob[1]);i++){
              
            cout<<"S";
        }
         count +=min(alice[1],bob[1]);
            alice[1] -=  min(alice[1],bob[1]);

        for(int i=0;i<min(alice[2],bob[2]);i++){
              
            cout<<"R";
        }
         count +=min(alice[2],bob[2]);
            alice[2] -=  min(alice[2],bob[2]);

        if(count == n){
        cout<<"\n";
        return;
        }
        else{
            while(true){
                for(int i=0;i<bob[0];i++){
                    cout<<"S";
                    count++;
                    if(count == n){
                        cout<<"\n";
                        return;
                    }
                }
                for(int i=0;i<bob[1];i++){
                    cout<<"R";
                    count++;
                    if(count == n){
                        cout<<"\n";
                        return;
                    }
                }
                for(int i=0;i<bob[2];i++){
                    cout<<"P";
                    count++;
                    if(count == n){
                        cout<<"\n";
                        return;
                    }
                }
            }
        }
    }
    else{
        cout<<"NO\n";
    }
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
