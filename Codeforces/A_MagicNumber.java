import java.util.Scanner;

public class A_MagicNumber
{
 public static void main(String[] args) {
    Scanner in  = new Scanner(System.in);
    String ret = in.next();
    for(int i=0;i<ret.length();i++){
        if(i==ret.length()-1)
        {
            if(ret.charAt(i) == '1')
            {
                continue;
            }
            else
            {
                System.out.println("NO");
                in.close();
                return;
            }
        }
        else if(i==ret.length()-2){
            if(ret.charAt(i) == '1' && ret.charAt(i+1) == '4'){
                i+=1;
            }
            else if(ret.charAt(i) == '1')
            {
                continue;
            }
            else
            {
                System.out.println("NO");
                in.close();
                return;
            }
        }
        else if(i<=ret.length()-3){
                   if(ret.charAt(i) == '1' && ret.charAt(i+1) == '4' && ret.charAt(i+2)=='4')
                   {
                       i+=2;
                   }
               else if(ret.charAt(i) == '1' && ret.charAt(i+1) == '4'){
                   i+=1;
               }
               else if(ret.charAt(i) == '1')
               {
                   continue;
               }
               else
               {
                   System.out.println("NO");
                   in.close();
                   return;
               }
           }
            
    }
    
    System.out.println("YES");
    in.close();
 }   
}

// ○ Proposed the topic java Vs kotlin ○ Created a folder and added resources for the same 
// ○ Proposed a link to create beautiful code snippets 
// ○ Proposed about two divisions in CP. ○ Compiled some interesting questions 
