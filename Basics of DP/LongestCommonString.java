import java.util.Arrays;
import java.util.Scanner;

public class LongestCommonString {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s1 = in.next();
        String s2 = in.next();
        int m = s1.length();
        int n = s2.length();
        int ans = lcstring(s1,s2,m,n);
        System.out.println(ans);
        in.close();
    }

    private static int lcstring(String s1, String s2, int m, int n) {
        int dp[][] = new int[m+1][n+1];
        for(int arr[]:dp){
            Arrays.fill(arr, 0);
        }
        for(int i=1;i<=m;i++)
            for(int j = 1;j<=n;j++){
                if(m==0 ||n==0)
                    return 0;
                else{
                    if(s1.charAt(i-1)==s2.charAt(j-1)){
                        dp[i][j] = dp[i-1][j-1]+1;

                    }
                    else{
                        dp[i][j] = 0;
                    }
                }
            }
            int mx = -1;
        for(int i=0;i<dp.length;i++)
            for(int j = 0;j<dp.length;j++)
            {
                mx = Math.max(mx,dp[i][j]);
            }
        return mx;
    }
}