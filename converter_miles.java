import java.util.Scanner;

public class converter_miles{
	public static void main(String [] args){
		System.out.println("Now we are going to convert kilometer to miles");
		
		
		
		Scanner neew=new Scanner(System.in);
		
		
		System.out.println("Enter the kilometer that will be converted to miles");
		float kilometer= neew.nextFloat();
		
		float miles= kilometer*0.621f;
		
		System.out.println("kilomtere has converted");
		System.out.println(miles);
		
		
		
		
		
	}
}