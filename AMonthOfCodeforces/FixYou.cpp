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
#define ll long long 
#define pb push_back

void solve(){
    int m,n;
    cin>>m>>n;
    int count = 0;
    if(m==1 && n ==1)
    {
        count = 0;
    }
    else if(m == 1){
        string val;
        cin>>val;
        for(char c:val){
            if(c == 'D'){
                ++count;
            }
        }
    }
    else if(n == 1){
        for(int i=0;i<m;i++){
        char val;
        cin>>val;
            if(val == 'R'){
                ++count;
            }
        }
    }
    else {
    for(int i=0;i<m;i++){
        string val;
        cin>>val;
        for(int j=0;j<val.length();j++){
            if(j==n-1 && val[j] == 'R'){
                ++count;
            }
            if(i == m-1 && val[j] == 'D'){
                ++count;
                
            }

        }
    }
    }
    cout<<count<<"\n";

}
int main(){
int t;
cin>>t;
while(t-->0)
    solve();
return 0;
}