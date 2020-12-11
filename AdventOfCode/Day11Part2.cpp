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
// template<typename...T>void input(T &...args) {((cin >> args), ...);}
#define all(x) (x).begin(),(x).end()
#define vec_p vector<pair<int,int>
void solve(){
    vector<string> a(98),temp(98);
    for(auto &i:a)   cin>>i;
    // debug(a);
    temp = a;
    // debug(temp);
    int n = a.size();
    bool hateyou = true;
    while(hateyou){

    for(int i=0;i<n;i++){
        for(int j=0;j<a[0].size();j++){
            if(i == 0 && j == 0)          {if(a[i][j]  == 'L')   if(a[i][j+1] != '#' && a[i+1][j] != '#' && a[i+1][j+1] != '#') temp[i][j] = '#';}
            else if(i == n-1 && j == n-1) {if(a[i][j]  == 'L')   if(a[i][j-1] != '#' && a[i-1][j] != '#' && a[i-1][j-1] != '#') temp[i][j] = '#';}
            else if(i == 0 && j==n-1)     {if(a[i][j]  == 'L')   if(a[i][j-1] != '#' && a[i+1][j] != '#' && a[i+1][j-1] != '#') temp[i][j] = '#';}
            else if(i == n-1 && j == 0)   {if(a[i][j]  == 'L')   if(a[i][j+1] != '#' && a[i-1][j] != '#' && a[i-1][j+1] != '#') temp[i][j] = '#';}
            else if(i == 0)               {if(a[i][j]  == 'L')   if(a[i][j+1] != '#' && a[i+1][j] != '#' && a[i+1][j+1] != '#' && a[i+0][j-1] != '#' && a[i+1][j-1] != '#')  temp[i][j] = '#';}
            else if(i == n-1)             {if(a[i][j]  == 'L')   if(a[i][j+1] != '#' && a[i-1][j] != '#' && a[i-1][j+1] != '#' && a[i-1][j-1] != '#' && a[i][j-1] != '#')    temp[i][j] = '#';}
            else if(j == 0)               {if(a[i][j]  == 'L')   if(a[i-1][j] != '#' && a[i+1][j] != '#' && a[i][j+1]   != '#' && a[i+1][j+1] != '#' && a[i-1][j+1] != '#')  temp[i][j] = '#';}
            else if(j == n-1)             {if(a[i][j]  == 'L')   if(a[i][j-1] != '#' && a[i+1][j] != '#' && a[i-1][j]   != '#' && a[i-1][j-1] != '#' && a[i+1][j-1] != '#')  temp[i][j] = '#';}
            else                          {if(a[i][j]  == 'L')   if(a[i][j+1] != '#' && a[i][j-1] != '#' && a[i+1][j]   != '#' && a[i-1][j+0] != '#' && a[i+1][j+1] != '#' && a[i-1][j-1] != '#' && a[i-1][j+1] != '#' && a[i+1][j-1] != '#')   temp[i][j] = '#';}
            // else debug(temp);
        }
    }
    if(a == temp)   break;
    a = temp;
    // debug(a);
     for(int i=0;i<n;i++){
        for(int j=0;j<a[0].size();j++){
         int c = 0;
            if(i == 0 && j == 0)          {continue; if(a[i][j]  == '#'){  if(a[i][j+1] == '#')++c; if( a[i+1][j] == '#')++c;  if(a[i+1][j+1] == '#')++c; if(c>3) temp[i][j] = 'L';}}
            else if(i == n-1 && j == n-1) {continue; if(a[i][j]  == '#'){  if(a[i][j-1] == '#')++c; if( a[i-1][j] == '#')++c;  if(a[i-1][j-1] == '#')++c; if(c>3) temp[i][j] = 'L';}}
            else if(i == 0 && j==n-1)     {continue; if(a[i][j]  == '#'){  if(a[i][j-1] == '#')++c; if( a[i+1][j] == '#')++c;  if(a[i+1][j-1] == '#')++c; if(c>3) temp[i][j] = 'L';}}
            else if(i == n-1 && j == 0)   {continue; if(a[i][j]  == '#'){  if(a[i][j+1] == '#')++c; if( a[i-1][j] == '#')++c;  if(a[i-1][j+1] == '#')++c; if(c>3) temp[i][j] = 'L';}}
            else if(i == 0)               {if(a[i][j]  == '#'){  if(a[i][j+1] == '#')++c; if( a[i+1][j] == '#')++c;  if(a[i+1][j+1] == '#')++c; if(a[i+0][j-1] == '#')++c; if(a[i+1][j-1] == '#')++c; if(c>3) temp[i][j] = 'L';}}
            else if(i == n-1)             {if(a[i][j]  == '#'){  if(a[i][j+1] == '#')++c; if( a[i-1][j] == '#')++c;  if(a[i-1][j+1] == '#')++c; if(a[i-1][j-1] == '#')++c; if(a[i][j-1]   == '#')  ++c; if(c>3) temp[i][j] = 'L';}}
            else if(j == 0)               {if(a[i][j]  == '#'){  if(a[i-1][j] == '#')++c; if( a[i+1][j] == '#')++c;  if(a[i][j+1]   == '#')++c; if(a[i+1][j+1] == '#')++c; if(a[i-1][j+1] == '#')++c; if(c>3) temp[i][j] = 'L';}}
            else if(j == n-1)             {if(a[i][j]  == '#'){  if(a[i][j-1] == '#')++c; if( a[i+1][j] == '#')++c;  if(a[i-1][j]   == '#')++c; if(a[i-1][j-1] == '#')++c; if(a[i+1][j-1] == '#')++c; if(c>3) temp[i][j] = 'L';}}
            else                          {if(a[i][j]  == '#'){  if(a[i][j+1] == '#')++c; if( a[i][j-1] == '#')++c;  if(a[i+1][j]   == '#')++c; if(a[i-1][j+0] == '#')++c; if(a[i+1][j+1] == '#')++c; if( a[i-1][j-1] == '#')++c; if(a[i-1][j+1] == '#')++c; if(a[i+1][j-1] == '#')++c; if(c>3) temp[i][j] = 'L';}}
            // else debug(temp);
        }
    }
    if(a == temp)   break;
    a = temp;
    }int c = 0;
    for(auto i:a)   for(auto j:i)   if(j == '#')   c++;
    debug(c);

}
int32_t vivek(){
NFS(NITRO);
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
