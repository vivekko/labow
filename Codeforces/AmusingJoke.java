import java.util.Arrays;
import java.util.Scanner;

public class AmusingJoke
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String word = in.next();
        String residence = in.next();
        String fin = in.next();
        word = word.concat(residence);
        char ar[] = word.toCharArray();
        Arrays.sort(ar);
        String word1 = new String(ar);
        char ar1[] = fin.toCharArray();
        Arrays.sort(ar1);
        String word2 = new String(ar1);
        if(word1.equals(word2))
            System.out.println("YES");
        else 
            System.out.println("NO");
        in.close();
    }
}