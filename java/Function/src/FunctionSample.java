import java.util.Scanner;

public class FunctionSample {
	public static void main(String a[]) {
		Scanner sc=new Scanner(System.in);
		
		System.out.println("Enter 2 Numbers;");
		int num=sc.nextInt();
		int num2=sc.nextInt();
		int h=sum(num,num2);
		System.out.println("Sum of 2 number is "+h);
	}
	
	static int sum(int a,int b) {
		int s=a+b;
		return s;
	}
}
