class Solution {
  public:
    int findPosition(int n) {
        // code here
        int count = 0;
        int position;
        for(int i=1;i<=32;i++){
            if(n&1){
                count++;
                position = i;
            }
            n>>=1;
        }
        if(count == 0 || count > 1) return -1;
        return position;
    }
};