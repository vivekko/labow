import java.util.HashSet;
import java.util.Scanner;

public class BoyOrGirl {
    public static void main(String[] args) {
        HashSet<Character> h = new HashSet<>();
        Scanner in = new Scanner(System.in);
        String test = in.next();
        int count = 0;

        for(int i = 0;i<test.length();i++){
        if(!h.contains(test.charAt(i)))
            {
                count++;
                h.add(test.charAt(i));
            }
        else 
            h.add(test.charAt(i));
        
    }
    if(count%2!=0)
        System.out.println("IGNORE HIM!");
    else
        System.out.println("CHAT WITH HER!");
    in.close();
}
}