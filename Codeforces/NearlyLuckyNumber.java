import java.util.Scanner;
import java.math.BigInteger; 
public class NearlyLuckyNumber {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        BigInteger n = in.nextBigInteger();
        String iStr = n.toString();
        int[] intArray = new int[iStr.length()];
        for(int j=0; j<iStr.length(); j++) {
            intArray[j] = Integer.parseInt(String.valueOf(iStr.charAt(j)));
        }
        
        int count=0;
        // while(n>0)
        for(int i=0;i<intArray.length;i++)
        {
            if(intArray[i]%10==4||intArray[i]==7)
                count++;
            // n = n/10;
        }
        if(count==4||count==7)
            System.out.print("YES");
        else
            System.out.print("NO");
        
        in.close();

    }
}