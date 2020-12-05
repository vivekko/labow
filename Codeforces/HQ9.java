import java.util.HashSet;
import java.util.Scanner;

public class HQ9{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        HashSet<Character> h = new HashSet<>();
        String ans = in.next();
        for(char i:ans.toCharArray())
        h.add(i);
        if(h.contains('H')||h.contains('9')||h.contains('Q')){
            System.out.println("YES");  
        }
        else 
            System.out.println("NO");
        in.close();
    }
}