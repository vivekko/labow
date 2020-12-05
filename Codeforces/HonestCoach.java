import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class HonestCoach {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        List<Integer> l = new ArrayList<>();
        while (t-->0) {
            int n = sc.nextInt();
            for(int i=0;i<n;i++){
                int z = sc.nextInt();
                l.add(z);
            }
            Collections.sort(l);

           int diff = Integer.MAX_VALUE; 
           for (int i=0; i<l.size()-1; i++) 
              if (l.get(i+1) - l.get(i) < diff) 
                  diff = l.get(i+1) - l.get(i); 
           
            System.out.println(diff);
        }
        sc.close();
        
    }
    
}