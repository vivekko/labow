import java.util.Scanner;

public class A_RequiredRemainder {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int a = in.nextInt();
            int b = in.nextInt();
            int c = in.nextInt();
            int temp = c/a;
            int ans = temp*a+b;
            if(ans<=c)
                System.out.println(ans);
            else
                {
                    --temp;
                    ans = temp*a+b;
                    System.out.println(ans);
                }
        }
        in.close();
    }
}