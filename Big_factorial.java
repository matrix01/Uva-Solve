import java.math.BigInteger;
import java.util.Scanner;

public class Big_factorial {
	private static BigInteger mod1=BigInteger.valueOf(4294967296L);
	private static Scanner sc=new Scanner(System.in);
	public static void main(String[]agrs){
		long n, i, t;
		t=sc.nextInt();
		for(i=0; i<t; i++){
			n=sc.nextInt();
			BigInteger fact=BigInteger.ONE;
			for(int j=1; j<n; j++){
				fact=fact.mod(mod1).multiply(BigInteger.valueOf(j)).mod(mod1);
			}
			System.out.println(fact);
		}
		
	}
}
