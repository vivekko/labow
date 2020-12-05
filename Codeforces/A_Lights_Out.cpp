#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int a[10][10];
int main()
{
    memset(a,0,sizeof(a));
    for(int i=1;i<=3;i++)
     for(int j=1;j<=3;j++)
      scanf("%d",&a[i][j]);
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            int cnt=a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1];
            if(cnt%2==1)printf("0");
            else printf("1");
        }
        printf("\n");
    }
    return 0;
}
