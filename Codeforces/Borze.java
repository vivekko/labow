import java.util.Scanner;

public class Borze {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String test = sc.next();
        String test2 = null;
        for(int i=0;i<test.length();i++)
        {
            if(test.charAt(i)=='.'){
                if(test2==null){
                    test2 = "0";
                }else
                test2 = test2.concat("0");
            }
            else if(test.charAt(i)=='-'&&test.charAt(i+1)=='-')
            {
                if(test2==null){
                    test2 = "2";
                    i = i + 1;
                }
                else{
                test2 = test2.concat("2");
                i=i+1;}

            }

        
            else if(test.charAt(i)=='-'&&test.charAt(i+1)=='.')
            {
                if(test2==null){
                    test2 = "1";
                    ++i;
                }else{
               test2 =  test2.concat("1");
               ++i;
                }
            }
            if(i>=test.length()-1){
                System.out.print(test2); 
                sc.close();
                return;
            }

            }       
            System.out.print(test2); 
        sc.close();
    }
}