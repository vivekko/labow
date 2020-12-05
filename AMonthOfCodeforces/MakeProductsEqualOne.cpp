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
    long long n;
    cin>>n;
    vector<long long> arr(n);
    long long spent = 0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    for(int i=0;i<n;i++){
        if(arr[i] > 1){
            spent += arr[i] - 1;
            arr[i] = 1;

        }
        else if(arr[i]<-1){
            spent+= abs(arr[i] + 1);
            arr[i] = -1;
        }
        // else if(arr[i] == 0){
        //     spent++;
        //     arr[i] = 1;
        // }
        // debug(spent,arr[i]);
    }
    long long count = 0;
    long long c = 0;
    for(int i=0;i<n;i++){
		if(arr[i]==-1){
			count++;
		}
		else if(arr[i]==0){
			c++;
		}
	}
	if(count&1){
		if(c>=1)
		    cout<<spent+c;
		else
		    cout<<spent+2;
	}
	else
		cout<<spent+c;
} 

int main(){
int t = 1;
// cin>>t;
while(t-->0)
    solve();
return 0;
}