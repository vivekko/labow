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
        int k;
        cin>>n>>k;
        int prev;
        cin>>prev;
        int val;
        int i = 1;
        if(prev == 0){
            cout<<0;
            return;
        }
        for(i;i<n;i++){
            cin>>val;
            if(val == 0)
                break;
            if(i == k-1){
                prev  = val;
            }
            if(i>k-1){
                if(val != prev)
                    break;
            }
        }
        cout<<i;

    }
    int main(){
    int t=1;
    // cin>>t;
    while(t-->0)
        solve();
    return 0;
    }