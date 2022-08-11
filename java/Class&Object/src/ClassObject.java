
public class ClassObject {
	public static void main(String st[]) {
		Sample s1=new Sample();
		Sample s2=new Sample();
		
		s1.a=20;
		s2.a=40;
		s1.b=50;
		s2.b=100;
		s1.a++;
		s1.display();
		s2.display();
	}
}
