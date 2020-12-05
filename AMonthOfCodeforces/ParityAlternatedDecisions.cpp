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

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);
    int odd = 0;
    int even = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]&1)
            odd++;
        else
            even++;
        sum+=arr[i];
    }
    sort(arr.begin(),arr.end());
    if(n%2==0){
    if(odd == even){
        return;
        cout<<"0\n";
    }
    else{
        int sum = 0;
        bool flag = true;
        if(arr[n-1]%2==0){
            flag = true;
        }
        sum-=arr[n-1];

        for(int i=n-2;i>=0;i--){
            if(flag == true){
                if(arr[i]&1){
                    sum-=arr[n-1];
                    flag = false;
                }    
                else    continue;
            }
            else
                if(arr[i]%2==0){
                    sum-=arr[n-1];
                    flag = true;
                }
                else    continue;
        }

    }
    }
    else{
    int temp = odd-1;
    if(temp == even){
        cout<<"0\n";
        return;
    }
    int temp = even - 1;
    if(temp  == odd){
        cout<<"0\n";
        return;
    }
      for(int i=n-2;i>=0;i--){
            if(flag == true){
                if(arr[i]&1){
                    sum-=arr[n-1];
                    flag = false;
                }    
                else    continue;
            }
            else
                if(arr[i]%2==0){
                    sum-=arr[n-1];
                    flag = true;
                }
                else    continue;
        }




}

int main(){
int t=1;
// cin>>t;
while(t-->0)
    solve();
return 0;
}