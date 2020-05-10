class Solution {
    public List<String> buildArray(int[] target, int n) {
       
        List<String> out = new ArrayList<String>();
        int j=0;
        for(int i=1;i<=n&&j<target.length; i++)
        {
            
                out.add("Push");
                if(i==target[j])
                {
                    ++j;
                }
                else
                {
                    out.add("Pop");
                }
                
        }
        return out ;
        
    }
}