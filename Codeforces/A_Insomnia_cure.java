import java.util.Scanner;

/**
 * A_Insomnia_cure
 */
public class A_Insomnia_cure {

    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int k =in.nextInt();
        int l = in.nextInt();
        int m = in.nextInt();
        int n = in.nextInt();
        int d = in.nextInt();
        if(k==1||l==1||m==1||n==1){
            System.out.println(d);
            in.close();
            return;
        }
        int drag  = 0;
        for(int i=1;i<=d;i++){
            if(i%k!=0&&i%l!=0&&i%m!=0&&i%n!=0)
                drag++;

        }
        System.out.println(d-drag);
        in.close();

    }
}