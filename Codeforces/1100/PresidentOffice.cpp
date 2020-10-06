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
char lett[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
bool visit[26];
int n,m;
char p;
char grid[300][300];
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};
int srch(char z){
	for(int i=0;i<26;i++){
		if(lett[i]==z) return i;
	}
}
void solve(){
   int ans,nr,nc,v;
	while(cin>>n>>m>>p){
		memset(visit,false,sizeof(visit));
		memset(grid,'.',sizeof(grid));
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++) cin>>grid[i][j];
		}
		
		ans=0;
		for(int z=0;z<n;z++){
			for(int k=0;k<m;k++){
				if(grid[z][k]==p){
					for(int x=0;x<4;x++){
						nr=z+dy[x];
						nc=k+dx[x];
						if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]!='.' && grid[nr][nc]!=p){
							v=srch(grid[nr][nc]);
							if(visit[v]==false){
								ans++;
								visit[v]=true;
							}
						}
					}
				}
			}
 
		}
		cout<<ans<<endl;
 
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
