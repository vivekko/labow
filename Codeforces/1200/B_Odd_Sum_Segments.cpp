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
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int &i:arr){
        cin>>i;
    }
    vector<int> seg;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(sum+=arr[i]){
            if(sum&1){
                seg.push_back(i+1);
                sum = 0;
            }
        }
    }
    if(seg.size() == k){
        puts("YES");
        for(int i:seg){
            cout<<i<<" ";
        }
    cout<<"\n";
    }
    else if(seg.size()<k){
        puts("NO");
    }
    else{
        if((seg.size()%k)%2 == 0){
            puts("YES");
            for(int i=0;i<seg.size();i++){

                if(i==k-1){
                    cout<<seg[seg.size()-1]<<"\n";
                    return;
                }
                cout<<seg[i]<<" ";
            }
            cout<<"\n";
        }
        else{
            cout<<"NO\n";
        }
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
