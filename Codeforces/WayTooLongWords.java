import java.util.Scanner;

public class WayTooLongWords {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-->0){
            String word = sc.next();
            if(word.length()>10){
                int val = word.length();
                String l = Integer.toString(val-2);
                System.out.println(word.charAt(0)+l+word.charAt(word.length()-1));
            }
            else 
                System.out.println(word);
        }
        sc.close();
    }
}