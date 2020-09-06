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
    string chota;
    cin>>chota;
    int z = 0;
    int o = 0;
    for(char c:chota){
        if(c == '0')
            ++z;
        else
            ++o;
    }
    if(min(o,z)%2 == 0)
        cout<<"NET";
    else
        cout<<"DA";

    cout<<"\n";
}

int main(){
int t;
cin>>t;
while(t-->0)
    solve();
return 0;
}

        // 1011001(A) ->  11001(B) -> 101(A) -> 1(B)
        // 4
        // 3

        // 01(A)
        

        // 111100(A) -> 1110(B) -> 11(A)
        // 4
        // 2