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
    // bool gosolveit(n,k,o);
    // if(k>n){
    //     cout<<"NO\n";
    // }
    // if(n%2==0){
    //     cout<<"YES\n";
    
    // int p = 2;
    // int sum = 0;
    // for(int i=0;i<k-1;i++){
    //     cout<<p<<" ";
    //     sum+=p;
    // }
    // cout<<n - sum<<"\n";
    // // cout<<"\n";
    // return;
    // }
    // else if(n%2!=0){
        int p = 1;
        int q = 2 ;
        int sum  =0;
        int sum2 = 0;
        for(int i=0;i<k-1;i++){
            sum+=p;
            sum2+=q;
        }
        if(p%2 == 0 && (n - sum)%2 == 0 && n-sum>0 ) {
            cout<<"YES\n";
            
            for(int i=0;i<k-1;i++){
                cout<<p<<" ";
            }
            cout<<n-sum<<"\n";
            return;
        }
        else if(p%2!=0 && (n-sum)%2!=0 && (n-sum)>0){
            cout<<"YES\n";
            for(int i=0;i<k-1;i++){
                cout<<p<<" ";
            }
            cout<<n-sum<<"\n";
            return;


        }
        else if(q%2 ==0 && (n - sum2)%2 ==0 && (n-sum2)>0){
            cout<<"YES\n";
            for(int i=0;i<k-1;i++){
                cout<<q<<" ";
            }
            cout<<n-sum2<<"\n";
            return;
        }
        else if(q%2!=0 && (n-sum2)%2 != 0 && (n-sum2)>0){
            cout<<"YES\n";
            for(int i=0;i<k-1;i++){
                cout<<q<<" ";
            }
            cout<<n-sum2<<"\n";
            return;
        }
        else{
            cout<<"NO\n";
        }
    // }

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


// 10 3
    // 2 2 

    // 
    // 97 2  47 
// 10 3 ---> 3 ------->2 2 6 -------->3 3 4
// 100 4---> 25------->
// 24*3 = 72 + 
// if n is even, fine!

// 55 5 --> 11 -> 10*4 + 11 ----> 11*4 + 11
// 55 6 --> 9 -> 9 * 5
