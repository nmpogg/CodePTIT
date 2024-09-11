import java.util.*;
import java.io.*;
import java.util.logging.Logger;

class LoaiPhong implements Comparable<LoaiPhong> {
    private char kiHieu;
    private String name;
    private int donGia;
    private double phiPV;
    
    public String getName() {
        return name;
    }
    public LoaiPhong(String input) {
        String a[] = input.split("\\s+");
        this.kiHieu = a[0].charAt(0);
        this.name = a[1];
        this.donGia = Integer.parseInt(a[2]);
        this.phiPV = Double.parseDouble(a[3]);
    }
    @Override
    public int compareTo(LoaiPhong a){
        return this.getName().compareTo(a.getName());
    }
    @Override
    public String toString(){
        return this.kiHieu + " " + this.name + " " + this.donGia + " " + this.phiPV;
    }
}

public class J07045_LoaiPhong{
    public static void main(String[] args) throws IOException {
        ArrayList<LoaiPhong> ds = new ArrayList<>();
        Scanner in = new Scanner(new File("PHONG.in"));
        int n = Integer.parseInt(in.nextLine());
        while(n-->0){
            ds.add(new LoaiPhong(in.nextLine()));
        }
        Collections.sort(ds);
        for(LoaiPhong tmp : ds){
            System.out.println(tmp);
        }
    }
}