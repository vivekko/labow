class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
            return true;
        long l=2; 
        long r=num;
        while(l<=r){
             long mid = (l+r)/2;
             if(mid*mid==num)
                 return true;
             if(mid*mid<num)
                    l = mid+1;
             if(mid*mid>num)
                    r = mid-1;
        }
          return false;
    }
};