/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh3;

import java.util.*;

/**
 *
 * @author Admin
 */


public class Bai2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        CongNhan[] ds = new CongNhan[n];
        for(int i = 0; i < n; i++){
            ds[i] = new CongNhan(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        Arrays.sort(ds);
        for(CongNhan x : ds){
            System.out.println(x);
        }
    }
}
/*
2
01T
Nguyen Van An
08:00
17:30
06T
Tran Hoa Binh
09:05
17:00
*/