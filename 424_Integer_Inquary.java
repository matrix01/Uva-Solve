import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
	BigInteger sum=BigInteger.ZERO;
        Scanner in=new Scanner (System.in);
            while(true){
		BigInteger a=in.nextBigInteger();
		if(a.compareTo(BigInteger.ZERO)==0)break;
                sum=sum.add(a);
            }
        System.out.println(sum);
    }
}
