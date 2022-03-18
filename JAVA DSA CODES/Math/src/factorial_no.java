import java.util.Scanner;

public class factorial_no {
	static int fact(int a1)
	{
		if(a1==0)return 1;
		return a1*fact(a1-1);
	}
	public static void main(String [] a)
	{
		System.out.println("hare krishna");
		Scanner sc =  new Scanner(System.in);
		int a1 ;
		a1 =  sc.nextInt();
		int ans = fact(a1);
		System.out.println(ans);
	}
}
