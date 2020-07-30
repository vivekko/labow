import java.util.Scanner;
import java.util.HashMap;
import java.util.HashSet;
public class Cninja {

	
	public static void main(String[] args) {
		// List<String> l = new ArrayList<>();
        Scanner in = new Scanner(System.in);
      	String ans = in.next();
        String val[] = ans.split(" ");
        HashMap<String,Integer> hm = new HashMap<>();
        HashSet<String> h = new HashSet<>();
        for(int i=0;i<val.length;i++){
            if(!h.contains(val[i]))
                h.add(val[i]);
            else
                hm.replace(val[i],1+hm.getOrDefault(val[i], 1) );
                Collections
        }
        }

	}

