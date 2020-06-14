import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class ArrivalofGeneral {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        List<Integer> l = new ArrayList<>();
        for(int i=0;i<n;i++){
            int a = in.nextInt();
            l.add(a);
        }
        int start = l.indexOf(Collections.max(l));
        int val = Collections.min(l);
        int end = l.lastIndexOf(val);
        if(start<end)
            System.out.println(start+n-end-1);
        else 
            System.out.println(start+n-end-2);

        in.close();
    }
    
}