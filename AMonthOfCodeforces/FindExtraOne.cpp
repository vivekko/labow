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
    int n;
    cin>>n;
    int left = 0,right = 0;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){
        int val1,val2;
        cin>>val1>>val2;
        v.push_back(make_pair(val1,val2));
        if(val1>0){
            right++;
        }
        else if(val1<0){
            left++;
        }

    }
    // debug(left);
    // debug(right);
    if(left - 1 == 0 || right - 1 == 0 ||right == 0 || left == 0)
        cout<<"Yes";
    else
        cout<<"No";
}
int main(){
int t=1;
// cin>>t;
while(t-->0)
    solve();
return 0;
}