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
    if(n == 1){
        cout<<1<<endl;
        return;
    }
    vector<int> arr(n);
    for(int &i:arr){
        cin>>i;
    }
    sort(arr.begin(),arr.end());
    int l  = 0,r = 1;
    int temp = 1;
    int ans = 1;
    while(true){
        if(l == r){
            ++r;
            temp = 1;
            if(r == n ||l == n){
                break;
            }
        }
        if(arr[r] - arr[l] <= 5){
            temp++;
            ans = max(ans,temp);
            r++;
            if(r == n ||l == n){
                break;
            }
        }else{
            ++l;
            if(r == n ||l == n){
                break;
            }

            --temp;
        }


        if(l==n || r == n){
            break;
        }

    }
    cout<<ans;
    

}
int32_t vivek(){
int t=1;
// cin>>t;
while(t-->0)
    solve();
return 0;
}
// 1 2 10 12 15 17
// ___.   .__                 __          .__              __    
// \_ |__ |  | _____    ____ |  | _____  _|__|__  __ ____ |  | __
//  | __ \|  | \__  \ _/ ___\|  |/ /\  \/ /  \  \/ // __ \|  |/ /
//  | \_\ \  |__/ __ \   \___|    <  \   /|  |\   /\  ___/|    < 
//  |___  /____(____  /\___  >__|_ \  \_/ |__| \_/  \___  >__|_ \
//      \/          \/     \/     \/                    \/     \/
