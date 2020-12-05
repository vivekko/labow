import java.util.Scanner;

public class MinimalSquare {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int a = in.nextInt();
            int b = in.nextInt();
            int N = Math.max(a,b);
            int M = Math.min(a,b);
            if(2*M>=a &&2*M>=b)
            {
                M = M*2;
                M = M*M;
                System.out.println(M);
            }
            else
            {
                System.out.println(N*N);
            }

        }
        in.close();
        
    }
    
}