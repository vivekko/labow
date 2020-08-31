import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class SegTree{
    int size;
    List<Integer> sum = new ArrayList<>();

    public void init(int n) {
        size = 1;
        while(size<n)   size = size*2;
        for(int i=0;i<n;i++){
            sum.add(i, 0);
        }
    }



    private void set(int i, int v, int x, int lx, int rx) {
        if(rx-lx == 0){
            sum.set(x, v);
            return;
        }
        int m = (lx+rx)/2;
        if(i<m)
            set(i, v, 2*x+1, lx, m);
        else
            set(i, v, 2*x+2, m, rx);

        sum.set(x, sum.get(2*x+1) + sum.get(2*x+2));
    }
    public void set(int i, int v) {
        set(i,v,0,0,size);
    }




    private int sum(int l, int r, int x, int lx, int rx) {
        if(lx> r || rx<l) return 0;
        if(lx>=l && rx<=r) return sum.get(x);
        int mid = (lx+rx)/2;
        int s1 = sum(l,r,2*x+1,lx,mid);
        int s2 = sum(l,r,2*x+2,mid,rx);
        return s1+s2;
    }
    public int sum(int l, int r) {
        return sum(l,r,0,0,size);
    }

}


public class SegmentTree{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int m = in.nextInt(),n = in.nextInt();

        SegTree st = new SegTree();
        st.init(n);

        // Initializing the Segment Tree
        for(int i = 0; i<n ; i++){
            int v = in.nextInt();
            st.set(i,v);
        }

        while(m-->0){
            int op = in.nextInt();
            if(op==1){
                int i = in.nextInt();
                int v = in.nextInt();
                st.set(i, v);
            }
            else{
                int l = in.nextInt(),r = in.nextInt();
                System.out.println(st.sum(l,r));
            }

        }


        in.close();

    }
}