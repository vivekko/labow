import java.util.Scanner;
public class BerlandPoker
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-->0) {
            int n= in.nextInt();
            int m= in.nextInt();
            int k= in.nextInt();
            // in.close();
            int r = n/k;
            int first=0;
            while( r-->0&&m>0)
              {  first++; 
                --m;
              }
            int second = 0;
            if(m==0){
              System.out.println(first);
            }
            else{
            k=k-1;
            // while(m-->0&&k-->0)
            // {
            //     second++;
            // }
            int sec = m%k;
            int ans = m/k+sec;
            // for(int i=0;i<sec;i++)
            System.out.println(first-(ans));
        }
        //  in.close();   
        }
        in.close();
    }
}
