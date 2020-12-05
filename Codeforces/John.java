import java.util.Scanner;

public class John {
    public static void main(String[] args) {
    int t;
    Scanner in = new Scanner(System.in);
    t= in.nextInt();
    while(t-->0){
        int a,b;
        a= in.nextInt();
        b= in.nextInt();
        int i=0;
        int high  = Math.max(a, b);
        int low = Math.min(a, b);
        int ans =low;
        int ans1 = low;
        int ans3 = low;
        // int i=0;
        while(ans<high){
            ++i;
                int a1=i;
                int a2=i+1;
                int a3=i+2;
                ans=low<<a1;
                ans1 = low<<a2;
            
                ans3 = low<<a3;
                if(ans==high || ans1==high || ans3==high){
                    if(ans==high)
                    System.out.println(i);
                    else if(ans1==high)
                    System.out.println(i);
                    else
                    System.out.println(i);
                    break;
                }
                if(low>=high)
                    break;
            }
        if(ans!=high)
        System.out.println(-1);
        }
        in.close();
    }
}