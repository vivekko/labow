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
   int n;
        cin>>n;
        vector <int> a(n);
        string s;
        map <int,int> ver;
        for(int i=0;i<n;i++) {
            cin>>a[i];
            s.push_back('0');
            ver[a[i]]+=1;
        }
 
        if ((ver).size()==n)
            s[0]='1';
 
        int l=0; int r=n-1;
        int cur=n-1; int val=1; int done=0;
        //cout<<s<<endl;
        while (l<r) {
            if (a[l]==val and ver[val]==1 and a[r]>val) {
                s[cur]='1';
                cur--;
                l++;
                ver[val]-=1;
            } else if (a[r]==val and ver[val]==1 and a[l]>val) {
                s[cur]='1';
                cur--;
                r--;
                ver[val]-=1;
            } else {
                if (ver[val]>=1 and a[r]>=val and a[l]>=val)
                    s[cur]='1';
                done=1;
                break;
            }
            if (done==1)
                break;
            val++;
        }
        cout<<s<<endl;
 
          

}
int32_t vivek(){
NFS(NITRO);
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
