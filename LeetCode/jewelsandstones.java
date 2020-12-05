class Solution {
    public int numJewelsInStones(String J, String S) {
        HashSet<Character> h = new HashSet<Character>();
        // for(char a:J)
        int i=0;
        while(i<J.length())
        {
            
            h.add(J.charAt(i));
            ++i;
        }
         i=0;
        int c=0;
        while(i<S.length())
        {
            char v= S.charAt(i);
            if(h.contains(v))
                ++c;
            ++i;
        }
        return c;
    }
}