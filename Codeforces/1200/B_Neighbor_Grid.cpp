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
    int r,c;
    cin>>r>>c;
    vector<vector<int>> arr(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j = 0;j<c;j++){
            cin>>arr[i][j];
            // arr[i][j] = 0;
        }
    }


    for(int i=1;i<r-1;i++){
        for(int j=1;j<c-1;j++){
                    if(arr[i][j]>4){
                        cout<<"NO\n";
                        return;
                    }
                   arr[i][j] = 4;
        }
    }
if(arr[0][0] >2 || arr[0][c-1] >2|| arr[r-1][0]>2||arr[r-1][c-1]>2 ){
     cout<<"NO\n";
     return;
}
    arr[0][0] = 2;
    arr[0][c-1] = 2;
    arr[r-1][0] = 2;
    arr[r-1][c-1] = 2;

    for(int i=1;i<r-1;i++){
       if(arr[i][0] > 3 || arr[i][c-1]>3){
           cout<<"NO\n";
           return;
       }
       else{
        arr[i][0] = 3;
        arr[i][c-1]=3;
       }
    }

    for(int i=1;i<c-1;i++){
       if(arr[0][i] > 3 || arr[r-1][i]>3){
           cout<<"NO\n";
           return;
       }
       else{
        arr[0][i] = 3;
        arr[r-1][i]=3;
       }
    }
    cout<<"YES\n";
    for(vector<int> i:arr){
        for(int j:i){
            cout<<j<<" ";
        }
        cout<<"\n";
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
