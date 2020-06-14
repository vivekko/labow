import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class OddSelection
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        List<Integer> l = new ArrayList<>();
        while(t-->0){
            int n = in.nextInt();
            int x = in.nextInt();
            for(int i=0;i<n;i++){
                l.add(in.nextInt());
            }
            if(x==1&&l.get(0)%2!=0)
                {
                    System.out.println("YES");
                    break;
                }
            else if(x==1&&l.get(0)%2==0)
            {
                System.out.println("NO");
                break;
            }
            int sum=0;
            while(x>0)
               if(x%2==0){
                   for(int i=0;i<l.size();i++){
                        if(l.get(i)%2==0){
                            sum = sum + l.get(i);
                        --x;
                        l.remove(i);
                        // i=0;
                    }
               
               else
               {
                if(l.get(i)%2!=0){
                    sum = sum + l.get(i);
                    --x;
                    l.remove(i);
                    // i=0;
                }

               }
            }


            }
            if(sum%2!=0)
            {
                System.out.println("YES");
            }
            else
                System.out.println("NO");
        }
    in.close();
    }
}