import java.util.Scanner;

public class Functions {
	int result;
	Scanner sc=new Scanner(System.in);
	void add() {
		System.out.println("Enter First Number:");
		int num1=sc.nextInt();
		System.out.println("Enter Second Number:");
		int num2=sc.nextInt();
		result=num1+num2;
		System.out.println('\n'+"The result of Addition:"+'\n'+result);
	}
	void sub() {
		System.out.println("Enter First Number:");
		int num1=sc.nextInt();
		System.out.println("Enter Second Number:");
		int num2=sc.nextInt();
		result=num1-num2;
		System.out.println('\n'+"The result of Substraction:"+'\n'+result);
	}
	void mul() {
		System.out.println("Enter First Number:");
		int num1=sc.nextInt();
		System.out.println("Enter Second Number:");
		int num2=sc.nextInt();
		result=num1*num2;
		System.out.println('\n'+"The result of Multipplication:"+'\n'+result);
	}
	void divi() {
		System.out.println("Enter First Number:");
		int num1=sc.nextInt();
		System.out.println("Enter Second Number:");
		int num2=sc.nextInt();
		result=num1/num2;
		System.out.println('\n'+"The result of Division:"+'\n'+result);
	}
}
