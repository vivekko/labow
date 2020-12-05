import java.util.Scanner;

public class ArrangingCoins {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int i=1;

        while(true){
            n = n - i;
            if(n<=0){
                System.out.println(i-1);
                in.close();
                return;
            }
            ++i;
        }
        // System.out.println(-1);
    }
}