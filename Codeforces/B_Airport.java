import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class B_Airport {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int m = in.nextInt();
        // int arr[] = new int[m];
        List<Integer> arr = new ArrayList<>(m);
        List<Integer> arr2 = new ArrayList<>(m);
        for(int i=0;i<m;i++){
           int val= in.nextInt();
           arr.add(val);
           arr2.add(val);
        }
        int profit = 0;
        for(int i=n;i>0;i--){
            int val = Collections.max(arr);
            profit = profit + val;
            if(val>1)
                arr.set(arr.indexOf(val), val-1);
            else
                arr.remove(new Integer(val));   
        }

        int loss = 0;
        for(int i=n;i>0;i--){
            int val = Collections.min(arr2);
            loss = loss + val;
            if(val>1)
                arr2.set(arr2.indexOf(val), val-1);
            else
                arr2.remove(new Integer(val));   
        }

        System.out.println(profit+" "+loss);
        in.close();
    }
}