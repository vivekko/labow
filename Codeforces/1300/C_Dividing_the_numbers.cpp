// 2
// 1 2 1
// 3
// 1 2 3  1,2 3
// 3
// 1 2 3 
//     3 1,2
// 5
//     1  2 3 4 5 
//         7 , 7,1
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
    cin>>n;
    deque<int> arr;
    deque<int> odd;
    vector<int> firstpart;
    for(int i =2;i<n;i++){
        arr.push_back(i+1);
    }
    for(int i =1;i<n;i++){
        odd.push_back(i+1);
    }
    
    if(n%2==0){

    while(arr.size()>2){
        int temp1 = arr[0];
        int temp2 = arr[arr.size()-1];
        arr.pop_back();
        arr.pop_back();
        arr.pop_front();
        arr.pop_front();

        firstpart.push_back(temp1);
        firstpart.push_back(temp2);
    }
    if(arr.empty()){
        cout<<1<<"\n";
        cout<< firstpart.size()+1<<" ";
        for(int i:firstpart){
            cout<<i<<" ";
        }
        cout<<1<<"\n";
        return;
    }
    if(arr.size() == 2){
        cout<<0<<"\n";
        cout<<firstpart.size()+2<<" ";
        for(int i:firstpart){
            cout<<i<<" "; 
        }
        cout<<arr[1]<<" "<<1<<" \n";
        return;
    }
    }
    else{

    while(odd.size()>2){
        int temp1 = odd[0];
        int temp2 = odd[odd.size()-1];
        odd.pop_back();
        odd.pop_back();
        odd.pop_front();
        odd.pop_front();

        firstpart.push_back(temp1);
        firstpart.push_back(temp2);
    }

    if(odd.empty()){
        cout<<1<<"\n";
        cout<< firstpart.size()<<" ";
        for(int i:firstpart){
            cout<<i<<" ";
        }
        // cout<<1<<"\n";
        return;
    }
    if(odd.size() == 2){
        cout<<0<<"\n";
        cout<<firstpart.size()+1<<" ";
        for(int i:firstpart){
            cout<<i<<" "; 
        }
        cout<<odd[1]<<" "<<" \n";
        return;
    }

    }


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

       
// 6
// 1 2  3  4 5 6 7  8
// //     3,6     4,5
// 5
// 1  2 3 4 5 
// //     2,5 
//    1  2 3