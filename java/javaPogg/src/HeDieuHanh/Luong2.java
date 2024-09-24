
package HeDieuHanh;



import java.util.*;

public class Luong2 extends Thread {
    public boolean isPrime(int n){
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    @Override
    public void run(){
        for(int i = 1; i <= 10000; i++){
            if(isPrime(i)){
                try{
                Thread.sleep(100);
                
            }catch(Exception e){}
                System.out.println("Luong2 " + i);
            }
        }
    }
}
