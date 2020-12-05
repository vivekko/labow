import java.io.CharArrayReader;
import java.util.Scanner;

public class A_StringTask {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String ans = in.next();
        ans = ans.toLowerCase();
        if(ans.charAt(0)!='a'||ans.charAt(0)!='o'||ans.charAt(0)!='y'||ans.charAt(0)!='e'||ans.charAt(0)!='u'||ans.charAt(0)!='i')
        ans = "."+ ans;
        StringBuilder anss = new StringBuilder(ans);
        for(int i=0;i<anss.length();i++){
            if(anss.charAt(i)=='a'||anss.charAt(i)=='o'||anss.charAt(i)=='y'||anss.charAt(i)=='e'||anss.charAt(i)=='u'||anss.charAt(i)=='i')
               { anss.deleteCharAt(i);
                i--;
               }
        }
        for(int i=2;i<anss.length();i+=2)
        {
         anss.insert(i,'.');   
        }
        System.out.println(anss);
    }
}
        // for(int i=0;i<ans.length()-1;i++){
       