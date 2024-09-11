import java.util.*;
import java.io.*;

public class XetTuyen {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        PH[] ds = new PH[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new PH(i+1, sc.nextLine(), sc.nextLine(), sc.nextDouble(),sc.nextDouble());
        }
        for(PH x : ds){
            System.out.println(x);
        }
    }
}

/*
3
Doan Thi Kim
13/03/1982
8
9.5
dinh Thi NGOC HA
3/9/1996
6.5
8
  tran thanh mai
12/9/2004
8
9
*/