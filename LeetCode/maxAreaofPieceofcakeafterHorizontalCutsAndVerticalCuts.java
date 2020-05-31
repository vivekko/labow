class Solution {
    public int maxArea(int h, int w, int[] hs, int[] vs) {
       
        Arrays.sort(hs);
        Arrays.sort(vs);
        int max = hs[0];
        // if(h.length)
        for(int i=0;i<hs.length-1;i++){
            if(hs[i+1]-hs[i]>max){
               max = hs[i+1]-hs[i];
            }
        }
        if(h- hs[hs.length-1]>max)
            max = h - hs[hs.length-1];
        
        
        int musk = vs[0];
         for(int i=0;i<vs.length-1;i++){
            if(vs[i+1]-vs[i]>musk){
               musk = vs[i+1]-vs[i];
            }
        }
         if(w- vs[vs.length-1]>musk)
      musk = w- vs[vs.length-1];
           return (int)((((long)max) * musk)%(1000000007));
        
        // return (max*musk);
    }
}