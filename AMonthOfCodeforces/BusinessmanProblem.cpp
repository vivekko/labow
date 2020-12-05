#include <bits/stdc++.h>
using namespace std;
void __pr(int x) {cerr << x;}
void __pr(long x) {cerr << x;}
void __pr(long long x) {cerr << x;}
void __pr(unsigned x) {cerr << x;}
void __pr(unsigned long x) {cerr << x;}
void __pr(unsigned long long x) {cerr << x;}
void __pr(float x) {cerr << x;}
void __pr(double x) {cerr << x;}
void __pr(long double x) {cerr << x;}
void __pr(char x) {cerr << '\'' << x << '\'';}
void __pr(const char *x) {cerr << '\"' << x << '\"';}
void __pr(const string &x) {cerr << '\"' << x << '\"';}
void __pr(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __pr(const pair<T, V> &x) {cerr << '{'; __pr(x.first); cerr << ','; __pr(x.second); cerr << '}';}
template<typename T>
void __pr(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __pr(i); cerr << "}";}
void _pr() {cerr << "]\n";}
template <typename T, typename... V>
void _pr(T t, V... v) {__pr(t); if (sizeof...(v)) cerr << ", "; _pr(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _pr(x)
#else
#define debug(x...)
#endif
void solve(){
    vector<pair<long long,long long>>vp2;
    vector<pair<long long,long long>> vp;
    
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        long long val,val1;
        cin>>val>>val1;
        vp.push_back(make_pair(val1,val));
    }

    int m;
    cin>>m;

    for(int i=0;i<m;i++){
        long long val,val1;
        cin>>val;
        cin>>val1;
        vp2.push_back(make_pair(val1,val));
    }

    sort(vp.begin(),vp.end());
    sort(vp2.begin(),vp2.end());

    // debug(vp);
    // debug(vp2);
    int index = -1;
    for(int i=0;i<min(n,m);i++){
        if(vp[i].second == vp2[i].second)
            {
                index = i;
                break;
            }
    }
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum+=vp[i].first;
    }
    for(int i=0;i<m;i++){
        sum+=vp2[i].first;
    }
    if(index==-1){
        cout<<sum;
    }
    else{
        cout<<sum - vp[0].first - vp2[0].first;
    }

}
 main(){
 int t=1;
// cin>>t;
while(t-->0)
    solve();
return 0;
}