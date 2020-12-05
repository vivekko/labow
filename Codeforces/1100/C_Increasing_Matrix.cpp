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
    int m,n;
    cin>>n>>m;
    vector<vector<int>> arr(n,vector<int>(m));  
    // vector<unordered_set<int>> sets;
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
            sum+=arr[i][j];
        }
    }

    for(int i=n-2;i>0;i--)
        for(int j=m-2;j>0;j--){
            if(arr[i][j] == 0){
                arr[i][j] = min(arr[i+1][j],arr[i][j+1])-1 ;
                sum+=arr[i][j];
            }
        }
    
        for(int i=n-2;i>=0;i--){
        for(int j=m-2;j>=0;j--){
            if(arr[i][j]>=arr[i][j+1] || arr[i][j]>=arr[i+1][j]){
                cout<<"-1\n";
                return;
            }
        }
    }
    for(int i=0;i<n-1;i++){
        if(arr[i][m-1] >= arr[i+1][m-1]){
                cout<<-1;
                return;
            }
        }

   for(int i=0;i<m-1;i++){
        if(arr[n-1][i] >= arr[n-1][i+1]){
                cout<<-1;
                return;
            }
    }

    cout<<sum;

}
int32_t vivek(){
int t=1;
// cin>>t;
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
