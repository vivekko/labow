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
#define NFS(nitro) ios_base::sync_with_stdio(false);cin.tie(0);
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
    int n;cin>>n;
    vector<int> a(n);

    set<int> s;
    for(int &i:a) {  
        cin>>i;
        s.insert(i);
    }
    if(n == 1){
        cout<<0<<"\n";
        return;
    }
    if(s.size() == 1){
        cout<<0<<"\n";
        return;
    }
    int l =1 ,r = n-2;
    for(l = 1;l<n;){
        if(a[l] == a[l-1]){
            if(l == n-1){
                cout<<0<<"\n";
                return;
            }
        }
        else break;
        ++l;
    }
    while(a[r] == a[r+1]){
        --r;
        if(r <= l){
            cout<<1<<"\n";
            return;
        }
        continue;
    }
    int mx = *max_element(a.begin(),a.end());
    
    vector<int> c(mx+1);
    int ans = 0;
    for(int i=l;i<=r;i++){
        while(a[i] == a[i+1]){++i;   continue;}
        c[a[i]]++;
    }
    if(c[a[0]] == 0){
        cout<<1<<"\n";
        return;
    }
    if(c[a[n-1]] == 0){
        cout<<1<<"\n";
        return;
    }
    
   int mn = INT32_MAX;
    debug(c[1]);    
    for(int i=0;i<c.size();){
        if(c[i] == 0){
            ++i;
            continue;
        }
      
        debug(mn,c[i],i);
        if(mn>=c[i]){
            ans = i;
            mn = c[i];
        }
        ++i;
    }
    cout<<mn+1<<"\n";
    
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
