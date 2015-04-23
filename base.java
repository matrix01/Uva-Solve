import java.io.*;
import java.math.*;
import java.util.StringTokenizer;
public class main{
    public static void main(String[]args)throws IOException{
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        String input=null;
        while((input = br.readLine())!=null){
            StringTokenizer st=new StringTokenizer(input);
            String str[]=new String[st.countTokens()];
            for(int i=0; i<str.length; i++)
                str[i]=st.nextToken();
            int basefrom=Integer.parseInt(str[1]);
            int baseto=Integer.parseInt(str[2]);
            int temp=Integer.parseInt(str[0], basefrom);
            String res=Integer.toString(temp, baseto);
            res=res.toUpperCase();
            if(res.length()>7)System.out.println("  ERROR");
            else System.out.printf("%7s\n", res);
        }
    }
}