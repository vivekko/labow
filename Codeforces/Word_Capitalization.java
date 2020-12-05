import java.util.Scanner;

public class Word_Capitalization {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String word = in.next();
        // String newWord = word.charAt(0);
        char wordc[] = new char[word.length()];
        int i=0;
        for(char c:word.toCharArray())
        {
            wordc[i] = c;
            ++i;
        }
        int val = wordc[0];
        if(val>=97)
            val = val - 32;
        wordc[0] = (char) (val); 
        String wordd = new String(wordc);
        in.close();
        System.out.print(wordd);
        
    }
}