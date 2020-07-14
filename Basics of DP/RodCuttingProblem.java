import java.util.Scanner;

public class RodCuttingProblem {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int rod[] = new int[n];
        int len[] = new int[n];
       for(int i=0;i<rod.length;i++)
            rod[i] = in.nextInt();
        for(int i=0;i<rod.length;i++)
            len[i] = in.nextInt();
        int ans = rodcutting(n, rod, len);
        System.out.println(ans);
        in.close();
    }

    private static int rodcutting(int n,int rod[],int len[]){
        int dp[][] = new int[n+1][len.length+1];
        for(int i=0;i<len.length+1;i++){
            dp[i][0] = 0;
        }
        for(int i=0;i<n+1;i++){
            dp[0][i] = 0;
        }

        for(int i=1;i<=n;i++)
            for(int j = 1;j<=len.length+1;i++){
                if(j>=rod[i-1]) 
                    dp[i][j] = Math.max(len[i-1] + dp[i][j-rod[i-1]], dp[i-1][j]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        return dp[n][len.length];
}
}