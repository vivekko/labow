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
#define vec_p vector<pair<char,int>>
void solve(){
    vector<string> a(779);
    for(auto &i:a)   cin>>i;
    //  vec_p a;
    map <char,int> mp;
    mp.insert({'N',1});
    mp.insert({'E',10});
    mp.insert({'S',0});
    mp.insert({'W',0});
    char fac = 'E';
    char fac1 = 'N';
    for(int i=0;i<779;i++){
        if(a[i][0] == 'F') {mp[fac]*=stoi(a[i].substr(1));mp[fac1]*=stoi(a[i].substr(1));}
        if(a[i][0] == 'N') fac1+=stoi(a[i].substr(1));
        if(a[i][0] == 'W') fac-=stoi(a[i].substr(1));
        if(a[i][0] == 'E') fac+=stoi(a[i].substr(1));
        if(a[i][0] == 'S') fac1-=stoi(a[i].substr(1));
        if(a[i][0] == 'L'){         //NO THATS TOO MUCH WORK, I WONT DO IT
        if(stoi(a[i].substr(1)) == 90 )     {if(fac == 'N'){  fac = 'W'; fac1 = '.';} else if(fac == 'E')  {fac = 'N';} else if(fac == 'W')  {fac = 'S';} else if(fac == 'S')  {fac = 'E';}continue;}
        else if(stoi(a[i].substr(1)) == 180){if(fac == 'N'){  fac = 'S'; fac1 = '.';} else if(fac == 'E')  {fac = 'W';} else if(fac == 'W')  {fac = 'E';} else if(fac == 'S')  {fac = 'N';}continue;}
        else if(stoi(a[i].substr(1)) == 270){if(fac == 'N'){  fac = 'E'; fac1 = '.';} else if(fac == 'E')  {fac = 'S';} else if(fac == 'W')  {fac = 'N';} else if(fac == 'S')  {fac = 'W';}continue;}
        }
        if(a[i][0] == 'R'){ 
        if(stoi(a[i].substr(1)) == 90 )     {if(fac == 'N')  {fac = 'E';}  else if(fac == 'E') {fac = 'S';} else if(fac == 'W')  {fac = 'N';} else if(fac == 'S')   {fac = 'W';} continue;}
        else if(stoi(a[i].substr(1)) == 180){if(fac == 'N')  {fac = 'S';}  else if(fac == 'E') {fac = 'W';} else if(fac == 'W')  {fac = 'E';} else if(fac == 'S')   {fac = 'N';} continue;}
        else if(stoi(a[i].substr(1)) == 270){if(fac == 'N')  {fac = 'W';}  else if(fac == 'E') {fac = 'N';} else if(fac == 'W')  {fac = 'S';} else if(fac == 'S')   {fac = 'E';} continue;}
        }
        debug(fac);
    }
    debug(abs(mp['N'] - mp['S']) + abs(mp['W']- mp['E']));
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
