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
bool stop = false;
int c = 0;
void solve(){
    NFS(NITRO);
    string a;
    // map<string,int> mp;
    bool cid = false;
    int pc = 0;
     while (getline(cin, a))
{
    if(a == "#"){
        debug(pc);
        if(pc == 8)    ++c;
        if(pc == 7 && !cid)    ++c;

        // cout<<pc<<'\n';
        stop = true;
        return;
    }

    if (a.empty()){
        debug(pc);  
        if(pc == 8)    ++c;
    else if(pc == 7 && !cid)    ++c;
        break;
    }

        istringstream iss(a);
    do
    {
        string subs;
        iss >> subs;
        if(subs.empty())
            break;
        // debug(subs);
        pc++;
        if(subs[0] == 'c')  cid = true;
    } while (iss);
}
    // cout<<pc<<"\n";

}
int32_t vivek(){
NFS(NITRO);

while(true){
    solve();
    if(stop)    break;
    
}
cout<<c<<"\n";
return 0;
}

// ___.   .__                 __          .__              __    
// \_ |__ |  | _____    ____ |  | _____  _|__|__  __ ____ |  | __
//  | __ \|  | \__  \ _/ ___\|  |/ /\  \/ /  \  \/ // __ \|  |/ /
//  | \_\ \  |__/ __ \   \___|    <  \   /|  |\   /\  ___/|    < 
//  |___  /____(____  /\___  >__|_ \  \_/ |__| \_/  \___  >__|_ \
//      \/          \/     \/     \/                    \/     \/
