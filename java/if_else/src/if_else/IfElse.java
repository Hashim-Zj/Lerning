package if_else;

import java.util.Scanner;

public class IfElse {
	public static void main(String a[]) {
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter a Number:");
		
		int num=sc.nextInt();
		if(num>=0)
			System.out.println("+ve");
		else
			System.out.println("-Ve");
		
	}
}
