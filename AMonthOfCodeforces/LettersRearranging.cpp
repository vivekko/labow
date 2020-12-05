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
bool check(string val){
    for(int i=0;i<val.length();i++){
        if(val[i]!=val[val.size()-1-i])
            return false;
    }
    return true;
}

void solve(){
    string val;
    cin>>val;
    if(val.length() == 1){
        cout<<"-1\n";
        return;
    }
    char a = val[0];
    bool flag = false;
    for(char c:val){
        if(c!=a)
            flag = true;
    }
    if(!flag)  {
        cout<<"-1\n";
        return;
    }
    if(!check(val)){
        cout<<val<<"\n";
    }
    else{
        sort(val.begin(),val.end());
        cout<<val<<"\n";
    }

}
int main(){
int t;
cin>>t;
while(t-->0)
    solve();
return 0;
}