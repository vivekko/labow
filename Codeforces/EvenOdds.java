import java.util.Scanner;
public class EvenOdds {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long n = in.nextLong();
        long k = in.nextLong();
        long sum = 0;
        // int  i=1;

        if((n&1)==1){
            if(k<=(n+1)/2)
            {
                // sum = 1;
                // for(long i=1;i<k;i++){
                //      sum = sum + 2;
                // }
                sum  = (k*2)-1;
                System.out.println(sum);
                in.close();
                return;
            }
            else
            {
                for(long i=(n+1)/2;i<k;i++){
                    sum = sum + 2;
               }
               System.out.println(sum);
               in.close();
               return;
            }
        }
        else {
            if(k<=n/2)
            {
                sum = 1;
                for(long i=1;i<k;i++){
                    sum = sum + 2;
               }
               System.out.println(sum);
               in.close();
               return;

            }
            else
            {
                for(long i=n/2;i<k;i++){
                    sum = sum + 2;
               }
               System.out.println(sum);
               in.close();
               return;
            }
        }
    }
}

// k=5 n=10 ;  1 3 5 7 9 2 4 6 8 10  
// k=5 n=11 ;  1 3 5 7 9 11 2 4 6 8 10

                // 1 3 5 7 2 4 6