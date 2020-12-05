import java.util.Scanner;

public class ShortestCommonSupersequence {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s1 = in.next();
        String s2 = in.next();
        String ans = shortestCommonSupersequence(s1, s2);
        System.out.println(ans);
        in.close();
    }
    public static String shortestCommonSupersequence(String str1, String str2) {
        int m = str1.length();
        int n = str2.length();
        int[][] dp = new int[m +1][n+1];
        
        for(int i = 0; i <= m; i++) {
            for(int j = 0; j <= n; j++) {
                if(i == 0 || j == 0) dp[i][j] = 0;
                else if(str1.charAt(i-1) == str2.charAt(j-1)) {
                    dp[i][j] = 1 + dp[i-1][j-1];
                } else {
                    dp[i][j] = Math.max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        
        int i = m;
        int j = n;
        StringBuffer result = new StringBuffer();
        
        while(i > 0 && j > 0) {
            if (str1.charAt(i-1) == str2.charAt(j-1)) {
                result.append(str1.charAt(i-1));
                i--;
                j--;
            } else if( dp[i-1][j] > dp[i][j-1] ) {
                result.append(str1.charAt(i-1));
                i--;
            } else {
                result.append(str2.charAt(j-1));
                j--;
            }
        }
        
        while(i > 0) {
           result.append(str1.charAt(i-1));
            i--; 
        }
        
                
        while(j > 0) {
           result.append(str2.charAt(j-1));
            j--; 
        }
        
        return result.reverse().toString();
        }
    }
