import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class A_Football {
    public static void main(String[] args) {
        Scanner in  = new Scanner(System.in);
        int t = in.nextInt();
        HashMap<String, Integer> map = new HashMap<String, Integer>();
        while(t-->0){
            // String count = in.next();''
            String key = in.next();
            int count = map.getOrDefault(key, 0);
            map.put(key, count + 1);
        }
        int i=0;
        int m = 0;
        int n = 0;
        String ms = new String();
        String ns = new String();
        // int ans = map.entrySet();
        for (Map.Entry<String, Integer> entry : map.entrySet()) {
            if(i++==0){
                m = entry.getValue();
                ms = entry.getKey();
            }
            else {
                n = entry.getValue();
                ns = entry.getKey();
            }
        }
             if(m>n){
                System.out.println(ms);
                in.close();
                return;

             }
            else
            {
                // String na =  entry.getKey();
                System.out.println(ns);
                in.close();
                return;
            }

    }
}
