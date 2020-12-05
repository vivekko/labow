#include <bits/stdc++.h>

using namespace std;

const int N = int(2e5) + 9;

int n;
int a[N];
int b[N];
bool u[N];

int main() {
//	freopen("input.txt", "r", stdin);
	scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
    	scanf("%d", a + i);
    }
    for(int i = 0; i < n; ++i){
    	scanf("%d", b + i);
    }
	
	int pos = 0;
	for(int i = 0; i < n; ++i){
		int x = b[i];
		if(u[x]){
			printf("0 ");
			continue;
		}
		
		int cnt = 0;
		while(true){
			++cnt;
			u[a[pos]] = true;
			if(a[pos] == x) break;
			++pos;
		} 
		
		++pos;
		printf("%d ", cnt);
	}    
	
	puts("");
    return 0;
}