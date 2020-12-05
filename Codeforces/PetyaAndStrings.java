import java.util.Scanner;

public class PetyaAndStrings{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String mutuk = in.next();
        String nandini = in.next();
        if(mutuk.equalsIgnoreCase(nandini))
            System.out.println(0);
        else if(mutuk.toLowerCase().compareTo(nandini.toLowerCase())>0)
            System.out.println(1);
        else 
            System.out.println(-1);
            in.close(); 
        
    }
}