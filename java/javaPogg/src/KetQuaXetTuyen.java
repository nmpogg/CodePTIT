import java.util.*;

public class KetQuaXetTuyen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        PhuHo[] ds = new PhuHo[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new PhuHo(i+1, sc.nextLine(), sc.next(), sc.nextDouble(), sc.nextDouble());
        }
        for(PhuHo x : ds){
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
Dinh Thi Ngoc Ha
03/09/1996
6.5
8
Tran Thanh Mai
12/09/2004
8
9
*/