
import java.util.Scanner;

public class  JzzhuAndChildren {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n,m;
        int a;
        n = in.nextInt();
        m = in.nextInt();
        int temp = -1;
        int maxg = 0;
        for(int i = 0; i < n; i++){
           a = in.nextInt();
           if(a>m){
               temp = i+1;
               maxg = Math.max(maxg,temp);
           }
           if(i==n-1 && temp==-1)
           {
               maxg = i+1;
           }
        }
        System.out.println(maxg);
        in.close();

    }
    
}