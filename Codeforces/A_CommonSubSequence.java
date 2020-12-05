import java.util.HashSet;
import java.util.Scanner;

public class A_CommonSubSequence{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            HashSet<Integer> hs = new HashSet<>();
            int m = in.nextInt();
            int n = in.nextInt();
            // int r[] = new int[m];
            for(int i=0;i<m;i++){
                int val = in.nextInt();
                hs.add(val);
            }
            int s[] = new int[n];
            for(int i=0;i<n;i++){
                s[i] = in.nextInt();
            }
            // int j = 0;
            for(int i=0;i<s.length;i++){
                if(hs.contains(s[i])){
                    System.out.println("YES"+"\n1 "+s[i]);
                    break;
                }
            }

            System.out.println("NO");

        }
        in.close();

    }
}