public class CountOfSubsetsofKSum {
    public static void main(String[] args) {
        int arr[] = new int[]{2,3,4,6,8,10};
        int n = arr.length;
        int sum = 10;
        int ans = countsubsets(arr, n, sum);
        System.out.println(ans);
    }

    private static int countsubsets(int arr[], int n, int sum) {
        int [][]dp = new int[n+1][sum+1];
        for(int i=0;i<=n;i++)
            dp[i][0] = 0;
        for(int i=0;i<=sum;i++)
            dp[0][i] = 1;
        for(int i=1;i<=n;i++)
            for(int j =1;j <= sum;j++)
            {
                if(arr[i-1]<=j)
                    dp[i][j] = dp[i-1][j] + dp[i-1][j-arr[i-1]];
                else
                    dp[i][j] = dp[i-1][j];
            }
        return dp[n][sum];
    }
}