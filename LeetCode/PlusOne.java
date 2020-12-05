class Solution {
    public int[] plusOne(int[] digits) {
         int c=1;
        for(int i=digits.length-1;i>=0;i--){
            digits[i]=digits[i]+c;
            if(digits[i]>9){
                digits[i]=0;
                c=1;
            }
            else
            {
                c=0;
                break;
            }
        }
        if(c==1){
            int[] temp = new int[digits.length + 1];
            temp[0]=1;
            return temp;
        }
        return digits;
    }
}