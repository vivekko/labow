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
// bool isPalin(string s){
//     for(int i=0;i<s.length()/2;i++){
//         if(s[i]!=s[s.length()-1-i])
//             return false;
//     }
//     return true;
// }
void solve(){
    string s;
    int cnt[26];
    cin>>s;
    for (int i=0; i<s.size(); ++i)
        cnt[s[i]-'a']++;
    int odd=0;
    for (int i=0; i<26; ++i)
        if (cnt[i]&1)
            odd++;
    if ((odd==0) || (odd&1))
        cout<<"First"<<endl;
    else
        cout<<"Second"<<endl;
}
int main(){
int t = 1;
// cin>>t;
while(t-->0)
    solve();
return 0;
}