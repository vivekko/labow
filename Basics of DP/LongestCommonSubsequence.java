import java.util.Scanner;

public class LongestCommonSubsequence {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s1 = in.next();
        String s2 = in.next();
        int m = s1.length();
        int n = s2.length();
        int ans = lcs(s1,s2,m,n);
        System.out.println(ans);
        in.close();
    }
    private static int lcs(String s1,String s2,int m,int n){
        if(m==0 || n==0)
            return 0;
        if(s1.charAt(m-1)==s2.charAt(n-1))
            return 1+lcs(s1, s2, m-1, n-1);
        else{
            return Math.max(lcs(s1, s2, m-1, n),lcs(s1, s2, m, n-1));
        }
        
    }
}