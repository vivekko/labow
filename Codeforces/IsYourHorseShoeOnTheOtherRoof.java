import java.util.HashSet;
import java.util.Scanner;

public class IsYourHorseShoeOnTheOtherRoof {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        // int s1 = sc.nextInt();
        // int s2 = sc.nextInt();
        // int s3 = sc.nextInt();
        // int s4 = sc.nextInt();
        int ans = 0;

        HashSet<Integer> h = new HashSet<Integer>();
        for(int i=0;i<4;i++){
            int temp = sc.nextInt();
            if(h.contains(temp))
                ans++;
            else 
            h.add(temp);
        }
        System.out.println(ans);
        sc.close();

        }
    
}