import java.util.Scanner;

public class W0_1_A_17 {
	public static void main(String st[]) {
		Scanner sc=new Scanner(System.in);
		
		
		Functions fun=new Functions();
		wloo : while (true) {
			System.out.println("1: Addition");
			System.out.println("2: Substraction");
			System.out.println("3: Multipplication");
			System.out.println("4: Division");
			System.out.println("5: Exiting to Programm");
			System.out.println('\n'+"Select a Choice :");
			int choice=sc.nextInt();
			
			
			
			switch(choice) {
			case 1:
				fun.add();
				break;
			case 2:
				fun.sub();
				break;
			case 3:
				fun.mul();
				break;
			case 4:
				fun.divi();
				break;
			case 5:
				break wloo;
			default:
                System.out.println("Invalid choice! Please Enter a valid choice. \n\n");
		}
			
		}
		
	}
}
