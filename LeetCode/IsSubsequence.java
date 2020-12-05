class Solution {
    public boolean isSubsequence(String s, String t) {
        // HashSet<Cha>
        int c = 0;
        int j = 0;
        if(s.length()==0)
            return true;
        else if(t.length()==0)
            return false;
        for(int i=0;i<t.length();i++){
            if(s.charAt(j)==t.charAt(i)){
                c++;
                j++;   
                if(j==s.length())
                    return true;
            }
        }
        return false;
    }
}