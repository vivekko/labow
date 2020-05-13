import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	public static void main (String[] args)
	{
		int m,n;
		Scanner in  = new Scanner(System.in);
		int t = in.nextInt();
		while(t>0){
		m = in.nextInt();
		n = in.nextInt();
		int ans = gcd(m,n);
		int ans2 = m*n/ans;
// 		cout<<ans;
		System.out.println(ans+" "+ans2);
		--t;
		}
        in.close();
	}
	public static int gcd(int m,int n)
	{
	    if(n==0)
	        return m;
	   else 
	        return gcd(n,m%n);
	}
}