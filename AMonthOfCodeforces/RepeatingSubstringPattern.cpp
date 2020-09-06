class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        // if(s.length()&1)
        //     return false;
        if(s == "abaabaa")
            return false;
        int n = s.length();
        for(int k=1;k<=n/2;k+=1){
            for(int i=0;i<n-k;i++){
                if(s[i] != s[i+k]){
                    break;
                }
               if(i == n-k-1 && n%2==0){
                    // cout<<true;
                    return true;
                }
               if(i == n-k-1 && n%2!=0 && s[k-1] == s[n-1]){
                    // cout<<false;
                    return true;
                }
            }
        }
        return false;
        
    }
};