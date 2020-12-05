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
void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int r = 0;
    if(a == c){
        if(b+d == a){
            cout<<"Yes"<<"\n";
            r = 1;
        }
    }
    else if(a == d){
         if(b+c == a){
            cout<<"Yes"<<"\n";r = 1;
        }

    }
    else if(b == c){
         if(a+d == c){
            cout<<"Yes"<<"\n";r  = 1;
        }
    }
    else if(b == d){
         if(a+c == d){
            cout<<"Yes"<<"\n";r = 1;
         }
    }
    if(!r)
        cout<<"No"<<"\n";
    
    }
int main(){
int t;
cin>>t;
while(t-->0)
    solve();
return 0;
}

    //  8888888888 888888888888