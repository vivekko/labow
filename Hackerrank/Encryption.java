import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Encryption {

    // Complete the encryption function below.
    static String encryption(String s) {
        int col = (int) Math.ceil(Math.sqrt(s.length()));
        // int r = Math.ceil(row); 
        int row = col-1;
        // System.out.println(row+" "+ col);
        // return "TEST";
        String ss = new String();
        for(int i=0;i<=row;i++){
            for(int j=i;j<s.length();j=j+col){
                ss = ss + s.charAt(j);
            }
            ss = ss + " ";
    }
    return ss;
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scanner.nextLine();

        String result = encryption(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
