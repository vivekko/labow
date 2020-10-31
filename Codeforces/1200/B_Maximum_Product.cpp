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
   vector<int>arr(n);
        int i,j,p=1;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==5)
        {
            cout<<arr[0]*arr[1]*arr[2]*arr[3]*arr[4]<<"\n";
            return;
        }
        sort(arr.begin(),arr.end());
        if(arr[n-1]<0)
        {
            cout<<arr[n-5]*arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]<<"\n";
            return;
        }
        if(arr[n-1]==0)
        {
            cout<<0<<endl;
            return;
        }
        if(arr[0]>=0)
        {
            cout<<arr[n-1]*arr[n-5]*arr[n-2]*arr[n-3]*arr[n-4]<<"\n";
            return;
        }
        else{
               int x=arr[n-1]*arr[n-5]*arr[n-2]*arr[n-3]*arr[n-4];
 
               int y=arr[0]*arr[1]*arr[2]*arr[3]*arr[n-1];
 
               int z=arr[0]*arr[1]*arr[n-2]*arr[n-3]*arr[n-1];
            x=max(x,max(y,z));
            cout<<x<<"\n";

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
