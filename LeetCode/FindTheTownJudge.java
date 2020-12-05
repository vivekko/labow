class Solution {
    public int findJudge(int N, int[][] trust) {
	//for town judge minimum people to trust is N-1
        if(trust.length<N-1)
            return -1;
        int[] outtrust = new int[N+1];
    
	//using a single array outtrust to record trust relationship
        for(int i = 0; i< trust.length; i++){
            outtrust[trust[i][1]]++; 
            outtrust[trust[i][0]]--;
        }
        
        for(int i=1;i<=N;i++){
            if(outtrust[i]==N-1)
                return i;
        }
        
        return -1;
    }
}
