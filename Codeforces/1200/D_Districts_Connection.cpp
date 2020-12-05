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
    #define int long long
    #define vivek main
    void solve(){
        int n;
        cin>>n;
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++){
            int val;
            cin>>val;
            arr[i] = {val,i+1};
        }
        
        sort(arr.begin(),arr.end());
        if(arr[0].first == arr[n-1].first){
            cout<<"NO\n";
            return;
        }
        cout<<"YES\n";
        int first = arr[0].first;
        
        for(int i=0;i<n;i++){
            if(arr[i].first!=first){
                cout<<arr[0].second<<" "<<arr[i].second<<"\n";
            }   
        }
        int i = 1;
        while(arr[i].first==first){
            cout<<arr[i].second<<" "<<arr[n-1].second<<"\n";
            ++i;
        }

    }
    int32_t vivek(){
    int t;
    cin>>t;
    while(t-->0)
        solve();
    return 0;
    }

    // ___.   .__                 __          .__              __    
    // \_ |__ |  | _____    ____ |  | _____  _|__|__  __ ____ |  | __
    //  | __ \|  | \__  \ _/ ___\|  |/ /\  \/ /  \  \/ // __ \|  |/ /
    //  | \_\ \  |__/ __ \   \___|    <  \   /|  |\   /\  ___/|    < 
    //  |___  /____(____  /\___  >__|_ \  \_/ |__| \_/  \___  >__|_ \
    //      \/          \/     \/     \/                    \/     \/
