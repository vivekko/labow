public class FindAnagramsinString {
    public static List<Integer> FindAnagramsinString(String p,String s)
    {
        List<Integer> l = new ArrayList<>();
        int counts[] = new int[26];
        for(char c:p.toCharArray()){
            counts[c-'a'];
        } 
        left = 0;
        right = 0;
        while(right<s.length())
        {
            if(counts[s.charAt(right)]>0){
                right++;
                counts[s.charAt(right)]--
                
                if(left-right==p.length())
                    l.add(left)
            }
            else if(left == right)
            {
                left++;
                right++;
            }
            else
            {
                counts[s.charAt(left++)]++;
            }

            }
        return l;
        }
    }
    
}