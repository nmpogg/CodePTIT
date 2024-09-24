/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package LopPair;

/**
 *
 * @author Admin
 */
public class Pair<T extends Number, U extends Number> {
    private T first;
    private U second;

    public Pair(T first, U second) {
        this.first = first;
        this.second = second;
    }
    private boolean isPrime(int n){
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return n > 1;
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
