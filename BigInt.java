/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

package uva_final_java;

/**
 *
 * @author Matrix_01
 */
import java.math.BigInteger;
import java.util.Scanner;
public class Main {

    /**
     * @param args the command line arguments
     */
     public static void main(String[] args) {       
        Scanner in = new Scanner (System.in);
        while(in.hasNextInt()){
            int N = in.nextInt();
            int A= in.nextInt();
            BigInteger tmp=BigInteger.valueOf(A);
            BigInteger sum = BigInteger.ZERO;
            for(int i = 1; i <=N; i++)
                sum=sum.add((BigInteger.valueOf(i)).multiply(tmp.pow(i)));
            System.out.println(sum);
        }
     }
}