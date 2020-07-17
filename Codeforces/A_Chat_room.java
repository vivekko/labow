import java.util.Scanner;

// import sun.tools.jstat.SymbolResolutionClosure;

public class A_Chat_room {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String ret = in.next();
        String check = "hello";
        int j =0;
        for(int i=0;i<ret.length();i++){
            if(ret.charAt(i) == check.charAt(j)){
                ++j;
                // i=j;
            }
            if(j == check.length()){
                System.out.println("YES");
                in.close();
                return;
            }
        }
    
    System.out.println("NO");
    in.close();
}
}