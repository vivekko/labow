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
    cin >> n;
    vector<int> v(n);
    int a = 0, b = 0;
    for (int &e : v) {
        cin >> e;
        if (e % 2 == 0) {
            a++;
        } else {
            b++;
        }
    }
    if (a % 2 != b % 2) {
        cout << "NO\n";
    } else {
        if (a % 2 == 0) {
            cout << "YES\n";
        } else {
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (v[i] % 2 != v[j] % 2 && abs(v[i] - v[j]) == 1) {
                        cout << "YES\n";
                        return;
                    }
                }
            }
            cout << "NO\n";
        }
    }}
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


















// 2
// 1 1
// 2
// 1 2
// 2
// 1 3
// 2
// 1 4
// 2
// 1 5
// 2
// 1 6
// 2
// 2 1
// 2
// 2 2
// 2
// 2 3
// 2
// 2 4
// 2
// 2 5
// 2
// 2 6
// 2
// 3 1
// 2
// 3 2
// 2
// 3 3
// 2
// 3 4
// 2
// 3 5
// 2
// 3 6
// 2
// 4 1
// 2
// 4 2
// 2
// 4 3
// 2
// 4 4
// 2
// 4 5
// 2
// 4 6
// 2
// 5 1
// 2
// 5 2
// 2
// 5 3
// 2
// 5 4
// 2
// 5 5
// 2
// 5 6
// 2
// 6 1
// 2
// 6 2
// 2
// 6 3
// 2
// 6 4
// 2
// 6 5
// 2
// 6 6
// 4
// 1 1 1 1
// 4
// 1 1 1 2
// 4
// 1 1 1 3
// 4
// 1 1 1 4
// 4
// 1 1 1 5
// 4
// 1 1 1 6
// 4
// 1 1 2 1
// 4
// 1 1 2 2
// 4
// 1 1 2 3
// 4
// 1 1 2 4
// 4
// 1 1 2 5
// 4
// 1 1 2 6
// 4
// 1 1 3 1
// 4
// 1 1 3 2
// 4
// 1 1 3 3
// 4
// 1 1 3 4
// 4
// 1 1 3 5
// 4
// 1 1 3 6