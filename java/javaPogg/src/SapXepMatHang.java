import java.util.*;
import java.io.*;

class MatHang1{
    private String id, name, group;
    private double buy, sell;

    public MatHang1(int id, String name, String group, double buy, double sell) {
        this.id = String.format("MH%02d", id);
        this.name = name;
        this.group = group;
        this.buy = buy;
        this.sell = sell;
    }

    public double getBuy(){
        return this.buy;
    }
    public double getSell(){
        return this.sell;
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.group + " " + String.format("%.2f", this.sell - this.buy);
    }
    
}

public class SapXepMatHang {
    public static void main(String[] args) throws Exception{
        File file = new File("MATHANG.in");
        Scanner sc = new Scanner(file);
        int n = sc.nextInt();
        ArrayList<MatHang1> ds = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            sc.nextLine();
            MatHang1 x = new MatHang1(i, sc.nextLine(), sc.nextLine(), sc.nextDouble(), sc.nextDouble());  
            ds.add(x);
        }
        Collections.sort(ds, new Comparator<MatHang1>() {
            @Override
            public int compare(MatHang1 a, MatHang1 b) {
                double profitA = a.getSell() - a.getBuy();
                double profitB = b.getSell() - b.getBuy();
                return Double.compare(profitB, profitA);
            }
        });
        for(MatHang1 x : ds){
            System.out.println(x);
        }
    }
}
