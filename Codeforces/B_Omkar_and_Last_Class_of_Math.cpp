
#include "bits/stdc++.h"
using namespace std;
 
int main(){
	int ttt;
	cin >> ttt;
	while(ttt --){
	    int n;
	cin >> n;
	int res = 1;
	int d  = 1;
	for(int low = 1; low <= n; low = d + 1){
		d = n / (n / low);
		if(d != n && n % d == 0){
			res = d;
		}
	}
	cout << res << " " << n - res << "\n";
		
	}
	return 0;
}