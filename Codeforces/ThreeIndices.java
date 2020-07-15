import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class ThreeIndices {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t-->0) {
            int n = in.nextInt();
            List <Integer> arr = new ArrayList<>(n);
            for(int i=0;i<n;i++){
                int val = in.nextInt();
                arr.add(val);
            }
            int ans = Collections.max(arr);
            if(ans == arr.get(arr.size()-1) || ans == arr.get(0))
                {
                    System.out.println("NO");
                    // break;
                }
            else{
                System.out.println("YES");
                int x = 1;
                int y = arr.indexOf(ans+1);
                int z = arr.size();
                System.out.println(x+" "+y+" "+z);
            }
            
        }
        in.close();
    }
}