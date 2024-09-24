import java.util.*;
import java.io.*;

public class TimViTriXauCon {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("STRING.in"));
        int t = sc.nextInt();
        while(t-- > 0){
            String s1 = sc.next();
            String s2 = sc.next();
            for(int i = 0; i < s1.length()-s2.length()+1; i++){
                int idx = i;
                boolean flag = true;
                for(int j = 0; j < s2.length(); j++){
                    if(s1.charAt(i) != s2.charAt(j)){
                        flag = false;
                        break;
                    }
                    i++;
                }
                i = idx;
                if(flag) System.out.printf("%d ", i+1);     
            }
            System.out.println("");
        }
    }
}
