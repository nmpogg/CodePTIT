import java.util.*;

class MatHang{
    private String id, name, donVi;
    private int buy, sell;
    private int loiNhuan;
    MatHang(int id,  String name, String donVi, int buy, int sell){
        this.id = "MH" + String.format("%03d", id);
        this.name = name;
        this.donVi = donVi;
        this.buy = buy;
        this.sell = sell;
        this.loiNhuan = this.sell - this.buy;
    }
    public String getId(){
        return this.id;
    }
    public int getLoiNhuan(){
        return this.loiNhuan;
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.donVi + " " + this.buy + " " + this.sell + " " + this.loiNhuan;
    }
}

public class DanhSachMatHang {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<MatHang> arr = new ArrayList<>();
        for(int i = 1; i <= n; i++){
            sc.nextLine();
            MatHang x = new MatHang(i, sc.nextLine(), sc.nextLine(), sc.nextInt(), sc.nextInt());
            arr.add(x);
        }
        Collections.sort(arr, new Comparator<MatHang>(){
            @Override
            public int compare(MatHang a, MatHang b) {
                if(a.getLoiNhuan() != b.getLoiNhuan())
                    return b.getLoiNhuan() - a.getLoiNhuan();
                return a.getId().compareTo(b.getId());
            }
            
        });
        for(MatHang x : arr){
            System.out.println(x);
        }
    }
}
/*
2
Ao phong tre em
Cai
25000
41000
Ao khoac nam
Cai
240000
515000
*/