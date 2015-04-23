import java.math.BigInteger;
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
	BigInteger sum=BigInteger.ZERO;
        Scanner in=new Scanner (System.in);
        while(true){
			BigInteger a=in.nextBigInteger();
                sum=BigInteger_sqrt(a);
        System.out.println(sum);
    }
}
static boolean didWork ;
public static BigInteger_sqrt(BigInteger A){
    BigInteger temp = A.shiftRight(BigInteger.valueOf(A.bitLength()).shiftRight(1).intValue()), result = null;
    while (true)
    {
        result = temp.add(A.divide(temp)).shiftRight(1);
        if (!temp.equals(result))
            temp = result;
        else
            break ;
    }
    didWork = false ;
    if (result.multiply(result).equals(A))
        didWork = true ;
    
    return result;
}