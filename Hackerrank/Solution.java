import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;


class Result {

    /*
     * Complete the 'decryptPassword' function below.
     *
     * The function is expected to return a STRING.
     * The function accepts STRING s as parameter.
     */

    public static String decryptPassword(String s) {
    // Write your code here
    StringBuffer ss = new StringBuffer(s);
    // char temp[] = new char[10]
    List <Character> l = new ArrayList<>(); 
    char la[]  = new char[1000000];
    for(int i=0;i<ss.length();i++){
       
        if((int)ss.charAt(i)>=0 && (int)ss.charAt(i)<=9)
        {
            la[i] = ss.charAt(i);
            ss.deleteCharAt(i);
        }
        else
        break;
    }
    for(int i=0;i<ss.length()-1;i++){
         if(Character.isUpperCase(ss.charAt(i)) && Character.isLowerCase(ss.charAt(i+1)))
            {
                char a = ss.charAt(i+1);
                ss.setCharAt(i+1,ss.charAt(i));
                ss.setCharAt(i, a);
                if(i<ss.length()-2)
                    ss.deleteCharAt(i+2);
            }
         else if(ss.charAt(i)=='0'){
             ss.setCharAt(i, la[la.length-1]);
         }

    }
        return ss.toString();

    }


    }


public class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String s = bufferedReader.readLine();

        String result = Result.decryptPassword(s);

        bufferedWriter.write(result);
        bufferedWriter.newLine();

        bufferedReader.close();
        bufferedWriter.close();
    }
}
