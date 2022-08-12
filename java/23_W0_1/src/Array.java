import java.util.Scanner;

public class Array {
	Scanner sc=new Scanner(System.in);
	
	void getArray(int l) {
		int[][] arr = null;
		System.out.println("Enter The values in "+l+"x"+l+"Metrix:");
		for(int i=0;i<l;i++) {
			for(int j=0;j<l;j++) {
				 arr[i][j]=sc.nextInt();
			}
		}
	}
}
