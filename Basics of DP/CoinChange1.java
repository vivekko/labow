import java.util.Scanner;

public class CoinChange1 {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long sum = in.nextLong(); 
        long n = in.nextLong();
        long coin[]= new long[(int) n];
        for(int i=0;i<n;i++){
            coin[i] = in.nextInt();
        }
        long ans = coinchange(n,coin,sum);
        System.out.println(ans);
        in.close();
    }

    private static int coinchange(long n,long []coin,long sum){
        long dp[][] = new long[(int) (n + 1)][(int) (sum + 1)];
        for(int i=0;i<=n;i++){
            dp[i][0] = 1;
        }
        for(int i=1;i<=sum;i++){
            dp[0][i] = 0;
        }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=sum;j++){
                if(coin[i-1]<=j){
                    dp[i][j] = dp[i-1][j] + dp[i][(int) (j - coin[i - 1])];
                }
                else
                    dp[i][j] = dp[i-1][j];
            }
            return (int) dp[(int) n][(int) sum];
    }
}