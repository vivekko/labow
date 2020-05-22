import java.util.Scanner;
public class BeautifulYear {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int year = in.nextInt();
        while (true) {
            ++year;
            int ones = year%10;
            int  tens = (year%100)/10;

            int  hun = (year%1000)/100;
            int  th = (year%10000)/1000;
           
            if(ones!=tens&&ones!=hun&&ones!=th&&hun!=tens&&tens!=th&&hun!=th){
                // ans = year;
                System.out.print(year);
                return;
            
            }
            in.close();
        }
    }
}
// 1978