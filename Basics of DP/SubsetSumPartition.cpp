#include <iostream>
#include <math.h>
using namespace std;
int n = 5;
int sum = 55;
int dp[6][56];
int subsetSum(int arr[],int sum,int n){
    for(int i=0;i<n+1;i++)
                dp[0][i] = -1;
    for(int i=0;i<n+1;i++)
                dp[i][0] = 1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=sum;j++){
            if(arr[i-1]<=j)
                dp[i][j] = max(dp[i-1][j-arr[i-1]] , dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
        return dp[n][sum];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = {2,3,7,8,10};
    int ans = subsetSum(arr,sum,n);
    cout<<ans;
    return 0;
}
