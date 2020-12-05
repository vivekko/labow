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
    vector<int> v;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        v.push_back(val);
    }
    int c = 0;
    for(int i=0;i<n;i++){
        if(v[i] == 0)   
            continue;
        if(v[i] > 0)
        {
            for(int j = 0;j<n;j++){
                if(i == j)
                    continue;
                if(v[j] < 0 )
                {
                    v[i] = 0;
                    v[j] = (v[j] + v[i]);
                    if(i>j){
                        c+=v[i];
                    }
    debug(v,i,j);
                }
            }
        }


        
    }
    // cout<<c<<"\n";

}
int main(){
int t;
cin>>t;
while(t-->0)
    solve();
return 0;
}