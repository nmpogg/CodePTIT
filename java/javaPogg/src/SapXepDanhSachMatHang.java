import java.util.*;

class MatHang2{
    private int id;
    private String name, group;
    private double buy, sell;

    public MatHang2(int id, String name, String group, double buy, double sell) {
        this.id = id;
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

public class SapXepDanhSachMatHang {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<MatHang2> ds = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            sc.nextLine();
            MatHang2 x = new MatHang2(i, sc.nextLine(), sc.nextLine(), sc.nextDouble(), sc.nextDouble());  
            ds.add(x);
        }
        Collections.sort(ds, new Comparator<MatHang2>() {
            @Override
            public int compare(MatHang2 a, MatHang2 b) {
                double profitA = a.getSell() - a.getBuy();
                double profitB = b.getSell() - b.getBuy();
                return Double.compare(profitB, profitA);
            }
        });
        for(MatHang2 x : ds){
            System.out.println(x);
        }
    }
}

/*
3
May tinh SONY VAIO
Dien tu
16400
17699
Tu lanh Side by Side
Dien lanh
18300
25999
Banh Chocopie
Tieu dung
27.5
37
*/