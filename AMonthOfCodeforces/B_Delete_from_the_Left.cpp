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
    string a,b;
    cin>>a>>b;

    long long length = max(a.size(),b.size()) - min(a.size(),b.size());   
    if(a.length() == 0 || b.length() == 0){
        cout<<length;
        return;
    }
    if(a.length()<b.length()){
        int j = length;
        for(int i=0;i<a.length();i++){
            if(a[i] != b[j++] )
                length+=2;
        }
        cout<<length;
        return;
    }
       if(a.length()>b.length()){
        long long  j = length;
        for(long i=0;i<b.length();i++){
            if(b[i] != a[j++] )
                length+=2;
        }
        cout<<length;
        return;
    }

    for(int i=0;i<a.length();i++){
        if(a[i] != b[i])
            length+=2;
    }
    cout<<length;

}
int main(){
int t=1;
// cin>>t;
while(t-->0)
    solve();
return 0;
}