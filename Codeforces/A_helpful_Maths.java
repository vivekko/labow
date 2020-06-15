
// import java.net.Inet4Address;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class A_helpful_Maths {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String test = in.next();
        char ar[] = new char[test.length()];
        ar = test.toCharArray();
        List<Integer> l = new ArrayList<>();
        for(int i=0;i<ar.length;i+=2){
            // if((int)ar[i]<=9)
                l.add((int)ar[i]);
        }
        Collections.sort(l);
        System.out.print(l.get(0)-48);
        for(int i=1;i<l.size();i++)
        {
            System.out.print("+"+(l.get(i)-48));
        }
        in.close();
        
    }
}