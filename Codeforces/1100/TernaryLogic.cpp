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
#define sz(a) int(a.size())
const int N = 0;
 
vector <int> convert(int x) {
    vector <int> res;
    do {
        res.push_back(x % 3);
        x /= 3;
    }
    while (x > 0);
    return res;
}
 
int main() {
 
    int a, b, c;
    scanf("%d%d", &a, &c);
    
    vector <int> va, vb, vc;
    va = convert(a);
    vc = convert(c);
    
    while (sz(va) != sz(vc)) {
        if (sz(va) > sz(vc)) vc.push_back(0);
        else va.push_back(0);
    }
    
    for (int i = 0; i < sz(va); ++i) {
        vb.push_back(0);
        for (vb[i] = 0; vb[i] < 3; ++vb[i])
            if ((vb[i] + va[i]) % 3 == vc[i]) break;
    }
 
    b = 0;
    for (int i = sz(vb) - 1; i >= 0; i--)
        b = b * 3 + vb[i];
        
    printf("%d\n", b);
 
    return 0;
}

// ___.   .__                 __          .__              __    
// \_ |__ |  | _____    ____ |  | _____  _|__|__  __ ____ |  | __
//  | __ \|  | \__  \ _/ ___\|  |/ /\  \/ /  \  \/ // __ \|  |/ /
//  | \_\ \  |__/ __ \   \___|    <  \   /|  |\   /\  ___/|    < 
//  |___  /____(____  /\___  >__|_ \  \_/ |__| \_/  \___  >__|_ \
//      \/          \/     \/     \/                    \/     \/
