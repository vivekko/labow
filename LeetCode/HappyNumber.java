
public class HappyNumber {
    public static void main(String []args){
        
        
            System.out.print(isHappy(19));

    }
    public static boolean isHappy(int n) {
        int arr[]= new int[10000];
        int sum =0;
        int i=0;
        int t=0;
        while(t<20){
            while(n>0)
            {
            dig = n%10;
            n = n/10;
            sum += dig*dig;  
            }
            }
            if(sum == 1)
                return true;
            else 
                n = sum;
        }
    return false;
    }
}

