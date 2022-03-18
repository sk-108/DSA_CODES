
import java.util.*;

public class palindrome_no{
	public static void main(String [] a)
	{
		System.out.println("hare krishna");
		Scanner sc =  new Scanner(System.in);
		int a1 ;
		a1 =  sc.nextInt();
		System.out.println(a1);
		int temp = 0;
		int tmp2 = a1;
		while(tmp2!=0)
		{
			temp  =  temp*10  +  tmp2%10;
			tmp2 = tmp2/10;
		}
		if(temp == a1)
		{
			System.out.println("palindrome no");
		}
		else {
			System.out.println("not a palindrome no");
		}
		
	}
}
