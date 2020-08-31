import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;
public class B_OmkarANDINFINITYCLOCK {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            long n = in.nextLong();
            long k = in.nextLong();
            ArrayList<Long> arr = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                long val = in.nextInt();
                arr.add(val);

            }
            for(long j=0;j<k;j++){
                Long d = Collections.max(arr);
                for(Long i=0;i<arr.size();i++){
                    arr.set(i,  (d - arr.get(i)));
                }
            }
            for(int i=0;i<arr.size();i++)
                System.out.print(arr.get(i)+" ");
            System.out.print('\n');
        }
        in.close();
    }
  
}