
package HeDieuHanh;

import java.util.*;
public class Luong3 extends Thread {
    @Override
    public void run(){
        for(int i = 1; i <= 10000; i++){
            if(i % 9 == 0){try{
                Thread.sleep(100);
                
            }catch(Exception e){}
                System.out.println("Luong3 " + i);
            }
        }
    }
}
