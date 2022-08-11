package forloop;

import java.util.Scanner;

public class ForLoop_1To10 {
	public static void main(String a[]) {
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter a Limit:");
		int sum=0;
		int limit=sc.nextInt();
		for(int i=0;i<=limit;i++) {
			sum+=i;
		}
		System.out.println("Result:"+sum);
		
	}
}
