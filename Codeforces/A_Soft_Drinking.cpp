#include <iostream>

using namespace std;
 
int main()
{
	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int s = 1000000000;
	int t;
	t = k * l / nl / n;
	if(t < s) s = t;
	t = c * d / n;
	if(t < s) s = t;
	t = p / np / n;
	if(t < s) s = t;		
	cout << s << endl;
	return 0;
}
