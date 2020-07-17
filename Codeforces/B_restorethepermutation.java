import java.util.HashSet;
import java.util.Scanner;

public class B_restorethepermutation {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            HashSet <Integer> hs = new HashSet<>();
            int k=0;
            int n = in.nextInt();
            int []ans = new int[n];
            for(int i=0;i<2*n;i++){
                int val = in.nextInt();
                if(!hs.contains(val)){
                    ans[k++] = val;
                    hs.add(val);
                }
            }
            for(int i=0;i<n;i++){
                System.out.print(ans[i]+" ");
            }
            System.out.println("\n");
        }
        in.close();
    }
}