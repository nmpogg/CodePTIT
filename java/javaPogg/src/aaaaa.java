/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author Admin
 */
import java.util.*;
public class aaaaa {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[][] a  = new int[n][3];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 3; j++){
                a[i][j] = sc.nextInt();
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            int cnt1 = 0, cnt0 = 0;
            for(int j = 0; j < 3; j++){
                if(a[i][j] == 1) cnt1++;
                else cnt0++;
            }
            if(cnt1 > cnt0) ans++;
        }
        System.out.println(ans);
    }
}
