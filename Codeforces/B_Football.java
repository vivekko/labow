import java.util.Scanner;

public class B_Football {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String ret = in.next();
        int count = 0;
        for(int i=0;i<ret.length();i++){
           if(count>=6){
                System.out.println("YES");
                    in.close();
                    return;
                // count = 
            }
            if(i!=ret.length()-1){
                if(ret.charAt(i)==ret.charAt(i+1)){
                count++;
                }
                else count = 0;
            }
            else
                {
                    if(ret.charAt(i)==ret.charAt(i-1))
                        ++count;
                        if(count>=6){
                            System.out.println("YES");
                                in.close();
                                return;
                        }
                    

                }
            // 1001010101010000000     
    }
    System.out.println("NO");
    in.close();
}
}