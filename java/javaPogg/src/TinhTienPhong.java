import java.util.*;
import java.io.*;
import java.time.LocalDate;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;

class KhachHang1 implements Comparable<KhachHang1>{
    private String id, name, idRoom, dayIn, dayOut;
    private int cost;
    
    public KhachHang1(int id, String name, String idRoom, String dayIn, String dayOut, int cost) {
        this.id = String.format("KH%02d", id);
        this.name = name;
        this.idRoom = idRoom;
        this.dayIn = dayIn;
        this.dayOut = dayOut;
        this.cost = cost;
    }
    public int getDays(){
        StringBuilder sb1 = new StringBuilder(this.dayIn);
        if(sb1.charAt(1) == '/') sb1.insert(0, "0");
        if(sb1.charAt(4) == '/') sb1.insert(3, "0");
        StringBuilder sb2 = new StringBuilder(this.dayOut);
        if(sb2.charAt(1) == '/') sb2.insert(0, "0");
        if(sb2.charAt(4) == '/') sb2.insert(3, "0");
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");
        LocalDate startDate = LocalDate.parse(sb1.toString(), formatter);
        LocalDate endDate = LocalDate.parse(sb2.toString(), formatter);
        return (int)ChronoUnit.DAYS.between(startDate, endDate)+1;
    }
    public int getCostRoom(){
        String s = this.idRoom.substring(0, 1);
        if(s.equals("1")) return 25;
        else if(s.equals("2")) return 34;
        else if(s.equals("3")) return 50;
        else return 80;
    }
    public int allCost(){
        return this.getCostRoom() * this.getDays() + this.cost;
    }
    public String formatName(){
        String ans = "";
        String[] a = this.name.trim().split("\\s+");
        for(String x : a){
            ans += Character.toUpperCase(x.charAt(0));
            for(int i = 1; i < x.length(); i++){
                ans += Character.toLowerCase(x.charAt(i));
            }
            ans += " ";
        }
        return ans.trim();
    }
    @Override
    public String toString(){
        return this.id + " " + this.formatName() + " " + this.idRoom + " " + this.getDays() + " " + this.allCost();
    }

    @Override
    public int compareTo(KhachHang1 other) {
        return other.allCost() - this.allCost();
    }

}

public class TinhTienPhong {
    public static void main(String[] args) throws FileNotFoundException{
        Scanner sc = new Scanner(new File("KHACHHANG.in"));
        int n = sc.nextInt();
        KhachHang1[] ds = new KhachHang1[n];
        for(int i = 0; i < n; i++){
            sc.nextLine();
            ds[i] = new KhachHang1(i+1, sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLine().trim(), sc.nextLine().trim(), sc.nextInt());
        }
        Arrays.sort(ds);
        for(KhachHang1 x : ds){
            System.out.println(x);
        }
    }
}
/*
3
Huynh VAN Thanh   
103 
5/6/2010   
5/6/2010   
15
le   DUC cong  
106 
08/3/2010   
1/5/2010   
220
Tran Thi Bich Tuyen   
207 
10/4/2010   
21/4/2010   
96
*/