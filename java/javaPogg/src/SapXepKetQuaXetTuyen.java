import java.util.*;

public class SapXepKetQuaXetTuyen {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        PhuHo[] ds = new PhuHo[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new PhuHo(i+1, sc.nextLine(), sc.next(), sc.nextDouble(), sc.nextDouble());
        }
        Arrays.sort(ds);
        for(PhuHo x : ds){
            System.out.println(x);
        }
    }
}
