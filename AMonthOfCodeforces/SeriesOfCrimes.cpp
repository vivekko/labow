#include <cstdio>
#include <cstring>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
 
using namespace std;
 
typedef unsigned long long ull;
typedef pair<int,int> pii;
#define mp make_pair
 
int n, m;
char c[102][102];
int p[4][2], pc;
 
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
 
	scanf("%d %d ", &n, &m);
	for (int i = 0; i< n; ++i)
		gets(c[i]);
 
	for (int i=0; i<n; ++i)
	{
		for (int j=0; j<m; ++j)
		{
			if (c[i][j]=='*')
			{
				p[pc][0] = i + 1;
				p[pc][1] = j + 1;
				++pc;
			}
		}
	}
 
	if (p[0][0] == p[1][0])
		printf("%d ", p[2][0]);
	else if (p[0][0] == p[2][0])
		printf("%d ", p[1][0]);
	else printf("%d ", p[0][0]);
 
	if (p[0][1] == p[1][1])
		printf("%d ", p[2][1]);
	else if (p[0][1] == p[2][1])
		printf("%d ", p[1][1]);
	else printf("%d ", p[0][1]);
 
	return 0;
}
