import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Swayamvar {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        String bride = in.next();

        Map<Character,Integer> hm = new HashMap<>();
        String groom = in.next();
        for(int i=0;i<n;i++){
            hm.put(groom.charAt(i), i);
        }
        int c = 0;
        for(int i=0;i<n;i++){
            if(hm.containsKey(bride.charAt(i))){
                hm.remove(bride.charAt(i));
                c++;
            }
        }
        System.out.println(bride.length()-c);
        in.close();
    }
}