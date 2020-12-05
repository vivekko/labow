import java.util.*;

public class RansomNote {
    public boolean canConstruct(String ransomNote, String magazine) {
        List <Character> h = new ArrayList <Character>(magazine.length());
        for(int i=0;i<magazine.length();i++)
        {
            h.add(magazine.charAt(i));
        }
    
        for(int i=0;i<ransomNote.length();i++){
            if(h.contains(ransomNote.charAt(i)))
                h.remove(new Character (ransomNote.charAt(i)));
            else 
                return false;
            
        }
    return true;
    }
}