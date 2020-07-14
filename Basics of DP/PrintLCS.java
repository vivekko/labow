import java.util.Arrays;
import java.util.Scanner;

public class PrintLCS {
    public static void main(String args[]){
        Scanner in = new Scanner(System.in);
        String s1 = in.next();
        String s2 = in.next();
        int m = s1.length();
        int n = s2.length();
        String ans = printLcs(s1,s2,m,n);
        StringBuffer a = new StringBuffer(ans);
        System.out.println(a.reverse());

    }

    private static String printLcs(String s1, String s2, int m, int n) {
        String ret = new String();
        int dp[][] = new int[m+1][n+1];
        for(int i=0;i<=m;i++)
            dp[i][0] = 0;
        for(int j=0;j<=n;j++)
            dp[0][j] = 0;
        for(int i=1;i<=m;i++)
            for(int j =1;j<=n;j++){
                if(s1.charAt(i-1)==s2.charAt(j-1))
                    dp[i][j] = 1 + dp[i-1][j-1];
                else
                    {
                        Math.max(dp[i-1][j], dp[i][j-1]);
                    }
                
            }

// Printing LCS
        // for(int )
        int i = s1.length();
        int j = s2.length();
        while(i>0 && j>0){
            if(s1.charAt(i-1)==s2.charAt(j-1)){
                ret = ret + s1.charAt(i-1);
                --i;
                --j;
            }
            else{
                if(dp[i][j-1]>dp[j][i-1])
                    --j;
                else
                    --i;
            }
        }
        return ret;
    }
}