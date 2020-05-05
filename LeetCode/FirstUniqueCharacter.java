import java.util.ArrayList;
import java.util.List;

public class FirstUniqueCharacter {
    public int firstUniqChar(String s) {
        List <Character> h = new ArrayList<Character>();
        int n = s.length();
        for(int i=0;i<n;i++){
            h.add(s.charAt(i));
        }
        for(int i=0;i<n;i++){
            // System.out.println();
            // char s.charAt(i) = s.charAt(i);
            h.set(i,'@');
            // System.out.println(h.get(i));
            if(!h.contains(s.charAt(i)))
                return i;
            else 
                h.set(i,s.charAt(i));
             // System.out.println(h.get(i));
        }
        return -1;
    }
}