public class HappyNumber {
    public static void main(String []args){
        
        
            System.out.print(isHappy(19));

    }
    public static boolean isHappy(int n) {
        int arr[]= new int[10000];
        int sum =0;
        int i=0;
        while(true){
            while(n>0)
            {
            n = n%10;
            arr[i] = n;
            n = n/10;
                i++;
            }
            for(int j:arr){
                sum = sum + (arr[j]*arr[j]);
            }
            if(sum == 1)
                return true;
            else 
                n = sum;
            
        }
    }
}
