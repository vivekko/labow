import java.io.IOException;
// import java.io.InputStreamReader;
import java.util.Scanner;

public class C_MoveBrackets {
    public static void main(String[] args) throws IOException {
        // InputStreamReader in = new InputStreamReader(System.in);
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-->0){
            int count = 0;
            int val = 0;
            String ans = in.next();
            for(int i:ans.toCharArray()){
                if(i == '('){
                    count = count +1 ;
                }
                else if(i==')')
                    {
                        --count;
                        if(count<0){
                            count = 0;
                            ++val;

                        }
                    }
                
                }
        System.out.println(val);
    }
    in.close();
    }
}