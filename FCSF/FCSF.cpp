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
    cout<<"\nEnter total no. of processes: ";
    int n;cin>>n;
    vector<int> bs(n);
    for(int &i:bs){
        cin>>i;
    }
    vector<int> tat(n);
    vector<int> wt(n);
    for(int i=0;i<n;i++){
        if(i>0)
        tat[i] = tat[i-1] + bs[i];
        else
        tat[i] = bs[i];
    }
    wt[0] = 0;
    for(int i=1;i<n;i++){
        wt[i] = tat[i-1];
    }

    cout<<"\nProcess\t\t     Burst Time\t\t Waiting Time \t\t Turnaround Time";
    for(int i=0;i<n;i++){
        cout<<"\nP["<<(i+1)<<"]\t\t\t"<<bs[i]<<"\t\t\t"<<wt[i]<<"\t\t\t"<<tat[i];
    }
    
    cout<<"\nAverage Waiting Time: "<<accumulate(wt.begin(),wt.end(),0)/n;
    cout<<"\nAverage Turnaround Time: "<<accumulate(tat.begin(),tat.end(),0)/n;
    cout<<"\n\nPress ENTER to continue";
    string val;
    getline(cin,val);
    getline(cin,val);
}
int32_t vivek(){
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
