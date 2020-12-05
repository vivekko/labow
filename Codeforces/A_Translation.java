import java.util.Scanner;

public class A_Translation {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        StringBuffer ans = new StringBuffer();
        ans.append(in.next());
        StringBuffer val = new StringBuffer();
        val.append(in.next());
        ans.reverse();
        if(ans.toString().equals(val.toString()))
            System.out.println("YES");
        else
            System.out.println("NO");
        in.close();
    }
}