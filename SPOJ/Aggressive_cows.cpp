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
    int n,c;
    cin>>n>>c;
    vector<int> v;
    for(int i=0;i<n;i++)
        {
            int val;
            cin>>val;
            v.push_back(val);
        }
    sort(v.begin(),v.end());
    int low  = 0;
    int high = v[v.size()-1];
    int mid,best = 0;
    while(low<=high){
        mid = (high+low+1)/2;
        int cnt = 1;
        int left = 0;
    for(int i=0;i<v.size() && cnt<c;i++){
        if(v[i] - v[left] >= mid)
            left = i,cnt++;
    }
        if(cnt>=c){
            best = mid;
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    cout<<best<<endl;
}
int main(){
int t;
cin>>t;
while(t-->0)
    solve();
return 0;
}