import java.util.*;
import java.io.*;

class Pair1<T extends Number, U extends Number> {
    private T first;
    private U second;
    public Pair1(T first , U second){
        this.first = first;
        this.second = second;
    }
    private boolean isPrime(int n) {
        if(n < 2) return false;
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    public boolean isPrime(){
        if(isPrime(first.intValue()) && isPrime(second.intValue())) return true;
        return false;
    }
    @Override
    public String toString(){
        return this.first + " " + this.second;
    }
}

public class LopPair{
    public static void main(String[] args) throws IOException {
        Scanner sc = new Scanner(new File("DATA.in"));
        int t = sc.nextInt();
        while(t-->0){
            int n = sc.nextInt();
            boolean check = false;
            for(int i = 2; i <= 2*Math.sqrt(n); i++){
                Pair1<Integer, Integer> p = new Pair1<>(i, n-i);
                if(p.isPrime()){
                    System.out.println(p);
                    check = true;
                    break; 
                }
            }
            if(!check) System.out.println(-1);
        }
    }
}
