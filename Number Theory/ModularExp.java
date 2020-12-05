import java.util.Scanner;

public class ModularExp{
   public static void main(String[] args){
       Scanner in  = new Scanner(System.in);
       long n = 2;
       long m = in.nextInt();
       long p = in.nextInt();
       long res = 1;
    //    n = n%p;
    if(m>=27){
        System.out.println(p);
        in.close();
        return;
    }
    else
{
       while(m>0){
           if((m&1)==1)
                {
                    res = (res * n);
                }
        n = (n*n);
        m = m>>1;
       } 
       System.out.println(p%res);
       in.close();
    }
   }

}