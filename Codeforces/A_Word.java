import java.util.Scanner;

public class A_word{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String test = in.next();
        int small=0;
        int big =0 ;
        for(int i=0;i<test.length();i++)
        {
            int c= (test.charAt(i));
            if(c>=97){
                small++;
            }
            else{
                big++;
            }
        }

        if(big>small)
            test = test.toUpperCase();
        else 
            test = test.toLowerCase();

        System.out.println(test);
        in.close();

    }
}