import java.util.Scanner;

public class A_Between_the_Offices{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int yes = 0;
        int no = 0;
        String val = in.next();
        for(int i=0;i<val.length()-1;i++){
            if(val.charAt(i)=='S' && val.charAt(i+1)=='F')
                ++yes;
            else if(val.charAt(i)=='F' && val.charAt(i+1)=='S')
                ++no;
            else {
                continue;
            }
        }
        if(yes>no)
            System.out.println("YES");
        else
            System.out.println("NO");
        in.close();
    }
}