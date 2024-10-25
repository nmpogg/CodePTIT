/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package pair;

/**
 *
 * @author Admin
 */
public class Pair<T extends Number, S extends Number> {
    private T first;
    private S second;
    
    public Pair(T firstE, S secondE){
        this.first = firstE;
        this.second = secondE;
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
