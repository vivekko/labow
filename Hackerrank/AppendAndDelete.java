import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

import sun.security.util.Length;

public class AppendAndDelete {

    // Complete the appendAndDelete function below.
    static String appendAndDelete(String s, String t, int k) {
        if(s.equals(t) && k>= s.length()*2)
            return "Yes";
        StringBuilder ss = new StringBuilder(s);
        StringBuilder tt = new StringBuilder(t);
        for(int i=0;i<Math.min(s.length(),t.length());i++){
            if(s.charAt(i) == t.charAt(i)){
                ss.deleteCharAt(i);
                tt.deleteCharAt(i);
                --i;
            }
            else{
                break;
            }
        }
        s = new String(ss);
        t = new String(tt);
        int ans = s.length() + t.length();

        if( (ans&1)==1 )
            if(k>=ans && (k&1)==1)
                return "True";
        
        return "No";
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = scanner.nextLine();

        String t = scanner.nextLine();

        int k = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        String result = appendAndDelete(s, t, k);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
