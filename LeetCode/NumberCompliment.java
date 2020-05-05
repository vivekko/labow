public class NumberCompliment {
    public int findComplement(int num) {
        int cp = num;
        int sum = 0;
        while(num > 0){
            sum = (sum << 1) + 1; // sum << 1 = sum * 2;
            num >>= 1; // num = num/2
        }
        return sum - cp;
        
    }
}

