import java.util.Scanner;

public class CodeforcesSubsequences {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String ans;
        if(n==1){
            System.out.println("codeforces");
            in.close();
            return;
        }
        else 
        {
           
            ans = "codeforces";
            for(int i=0;i<n-1;i++){
                ans = ans.concat("s");
            }
        }
        System.out.println(ans);;
        in.close();


    }
}