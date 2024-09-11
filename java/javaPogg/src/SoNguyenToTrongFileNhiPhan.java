import java.util.*;
import java.io.*;

public class SoNguyenToTrongFileNhiPhan {
    public static int[] prime = new int[10001];
    public static void sieve(){
       for(int i = 0; i <= 10000; i++){
           prime[i] = 1;
       }
       prime[0] = prime[1] = 0;
       for(int i = 2; i <= 100; i++){
           if(prime[i] == 1){
               for(int j = i * i; j <= 10000; j+=i){
                   prime[j] = 0;
               }
           }
       }
    }
    public static void main(String[] args) throws Exception{
        sieve();
       ObjectInputStream data = new ObjectInputStream(new FileInputStream("SONGUYEN.in"));
       ArrayList<Integer> arr = (ArrayList<Integer>) data.readObject();
       int[] freq = new int[10001];
       for(int x : arr){
           if(prime[x] == 1){
               freq[x]++;
           }
       }
       for(int i = 0; i <= 10000; i++){
           if(prime[i] == 1 && freq[i] != 0){
               System.out.println(i + " " + freq[i]);
           }
       }
    }
}
