class Solution {
    public boolean isPowerOfTwo(int n) {
        if(n<0)
            return false;
      int left = 0;
    int right = n-1;
        while(left<=right){
           int mid  = (left+ right)/2;
            // System.out.println(Math.pow(2,mid)+" "+n);
            if(Math.pow(2,mid)==n)
                return true;
            else if(Math.pow(2,mid)<n)
                left = mid + 1 ;
            else 
                right = mid - 1;
            }
            return false;
        }
        
        
}
