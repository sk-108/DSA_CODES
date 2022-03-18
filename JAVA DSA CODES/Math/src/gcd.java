import java.util.Scanner;

public class gcd {
	static int gcdd(int a1,int a2)
	{
		int ans = Math.min(a1, a2);
		for(int i=ans;i>=0;i--)
		{
			if(a1%i==0 && a2%i==0)
			{
				return i;
			}
		}
		return -1;
	}
	public static void main(String [] a)
	{
		System.out.println("hare krishna");
		Scanner sc =  new Scanner(System.in);
		int a1 ;
		a1 =  sc.nextInt();
		int a2;
		a2 = sc.nextInt();
		int ans = gcdd(a1,a2);
		System.out.println(ans);
	}
}
