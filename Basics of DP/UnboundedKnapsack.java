import java.util.Scanner;

public class UnboundedKnapsack {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int val[] = new int[n];
        int wt[] = new int[n];
        int W = in.nextInt();
        int ans = unboundedKnapsack(val,wt,n,W);
        System.out.println(ans);
        in.close();
    }
    public static int unboundedKnapsack(int val[],int wt[],int n,int W){
        int dp[][] = new int[n+1][W+1];
        for(int i=0;i<=n;i++){
            dp[i][0] = 0;
        }
        for(int i=0;i<=W;i++){
            dp[0][i] = 0;
        }
        for(int i = 1;i< n;i++)
            for(int j = 1;j< W;j++){
                if(wt[i-1]<=j)
                    dp[i][j] = Math.max(dp[i-1][j] , val[i-1]+ dp[i][j-wt[i-1]]);
                else
                    dp[i][j] = dp[i-1][j];

            }
        return dp[n][W];
    }
}