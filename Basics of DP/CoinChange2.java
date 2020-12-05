import java.util.Scanner;

public class CoinChange2 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int sum = in.nextInt();
        int n = in.nextInt();
        int coin[] = new int[n];
        for(int i=0;i<n;i++){
            coin[i] = in.nextInt();
        }
        int ans = coinchangeII(n, sum, coin);
        System.out.println(ans);
        in.close();
    }

    private static int coinchangeII(int n, int sum, int[] coin) {
        int dp[][] = new int[n+1][sum+1];
        for(int i = 0;i<=n;i++){
            dp[i][0] = 0;
        }
        for(int i = 0;i <=sum ;i++)
            dp[0][i] = Integer.MAX_VALUE - 1;
        for(int i = 1;i<=n;i++)
            for(int j = 1;j<=sum;j++){
                if(j>=coin[i-1])
                    dp[i][j] = Math.min(dp[i-1][j], dp[i][j-coin[i-1]]+1);
                else
                    dp[i][j] = dp[i-1][j];
                            }
                            return dp[n][sum];

    }
}