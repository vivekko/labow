import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class B_AccurateLee
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();

        while(t-->0)
        {  
            int len = in.nextInt();
            String inp = in.next();
            List<Character> l = new ArrayList<>(len);
            for (char c : inp.toCharArray()) {
                l.add(c);
            }
            int c = 0;
            for(int i=0;i<l.size()-1;i++){
                if(i==l.size()-2 && l.get(i-1)=='1' && l.get(i)=='0')
                {
                    l.remove(i);
                    
                    c++;
                }
                else if(i==l.size()-1){
                    continue;
                }
                else if(l.get(i)=='1' && l.get(i+1)=='0' && l.get(i+2)=='0')
                {
                    l.remove(i+1);
                    c++;
                    i--;

                }
                else if(l.get(i)=='1' && l.get(i+1)=='0' && l.get(i+2)=='1'){
                    l.remove(i);
                    c++;
                
                }
                if(i==l.size()-1 && c>0){
                    i = 0;
                    c  = 0;
                }
            }
            System.out.println(l.toString());
        }
        in.close();
    }
}