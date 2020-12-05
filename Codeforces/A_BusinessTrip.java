import java.util.Arrays;
import java.util.Scanner;

public class A_BusinessTrip {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        if(t==0){
            System.out.println(0);
            in.close();
            return;
        }
        int petya[] = new int[12];
        for(int i=0;i<petya.length;i++){
            petya[i] = in.nextInt();
        }
        Arrays.sort(petya);
        int sum = 0;
        int i = 11;
        int c = 0;
        while(sum<t && c<12){
            sum = sum + petya[i];
            --i;
            ++c;
        }
        if(sum>=t)
            System.out.println(c);
        else
            System.out.println(-1);
        in.close();
    }
}