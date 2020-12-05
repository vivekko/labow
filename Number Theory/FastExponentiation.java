import java.util.Scanner;
public class FastExponentiation {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x = in.nextInt();
        int y = in.nextInt();
        //To calculate X^Y in O(log y)
        int res = 1;
        while(y>0){
            if((y & 1 )==1) //if y is odd multiply x with the result
                res = res*x;
            x = x*x;
            y = y>>1; // y/=2
        }
        System.out.println(res);
        in.close();
    }
}