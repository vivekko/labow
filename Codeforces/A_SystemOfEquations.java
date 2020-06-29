import java.util.Scanner;

public class A_SystemOfEquations {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        int c = 0;
        for(int i=0;i<=Math.max(a,b);i++){
            for(int j=0;j<=Math.max(a, b);j++){
                if(i*i<=a &&j*j<=b)
                if((i*i +j) == a && (i+ j*j)==b)
                    ++c;
            }
        }
        System.out.println(c);
        in.close();
    }
}