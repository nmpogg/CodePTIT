/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ThucHanh1;
import java.util.*;


public class DanhDauSanPhamLoi {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] a = new int[n+1];
        for(int i = 0; i < m; i++){
            int x = sc.nextInt();
            a[x] = 1;
        }
        ArrayList<String> error = new ArrayList<>();
        ArrayList<String> correct = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            if(i > n) break;
            if(a[i] == 1){
                int st = i;
                while(a[i] == 1){
                    i++;
                    if(i > n) break;
                }
                i--;
                int end = i;
                if(st != end){
                    error.add(st + "-" + end);
                }
                else error.add("" + st);
            }
            else{
                int st = i;
                while(a[i] == 0){
                    i++;
                    if(i > n) break;
                }
                i--;
                int end = i;
                if(st != end){
                    correct.add(st + "-" + end);
                }
                else correct.add("" + st);
            }
        }
        System.out.print("Errors: ");
        for(int i = 0; i < error.size()-2; i++){
            System.out.print(error.get(i) + ", ");
        }
        System.out.println(error.get(error.size()-2) + " and " + error.get(error.size()-1));
        System.out.print("Correct: ");
        for(int i = 0; i < correct.size()-2; i++){
            System.out.print(correct.get(i) + ", ");
        }
        System.out.println(correct.get(correct.size()-2) + " and " + correct.get(correct.size()-1));
    }
}
