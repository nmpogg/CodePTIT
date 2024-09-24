
package HeDieuHanh;

import java.util.*;
public class Luong1 extends Thread {
    public boolean isPerfect(int n){
        int res = 0;
        for(int i = 2; i <= n/2; i++){
            if(n % i == 0) res += i;
        }
        if(res != n) return false;
        return true;
    }
    @Override
    public void run(){
        for(int i = 1; i <= 10000; i++){
            if(isPerfect(i)){
                try{
                Thread.sleep(100);
                
            }catch(Exception e){}
                System.out.println("Luong1 " + i);
            }
        }
    }
}
