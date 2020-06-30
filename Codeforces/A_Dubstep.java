import java.util.Scanner;

public class A_Dubstep {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String ans = in.next();
        int exe = 1;
        String ret = new String();
        for(int i=0;i<ans.length();i++)
        {
          if(i<=ans.length()-3)
            if(ans.charAt(i)=='W' && ans.charAt(i+1)=='U' && ans.charAt(i+2)=='B'){
                i+=2;
                exe = 0;
            }
            else{
                if(exe++ == 0)
                    ret = ret.concat(" ");
                ret = ret + ans.charAt(i);
            }
          else{
              if(exe++==0)
                ret = ret.concat(" ");
              ret = ret + ans.charAt(i);
          }
        }
        System.out.println(ret);
    }
}