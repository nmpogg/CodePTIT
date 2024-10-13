///*
// * To change this license header, choose License Headers in Project Properties.
// * To change this template file, choose Tools | Templates
// * and open the template in the editor.
// */
//import java.util.*;
//import java.io.*;
//import java.time.LocalDate;
//import java.time.format.DateTimeFormatter;
//
//class SanPham{
//    private String maSP, tenSP;
//    private int giaBan, thoiHanBaoHanh;
//
//    public SanPham(String maSP, String tenSP, int giaBan, int thoiHanBaoHanh) {
//        this.maSP = maSP;
//        this.tenSP = tenSP;
//        this.giaBan = giaBan;
//        this.thoiHanBaoHanh = thoiHanBaoHanh;
//    }
//    public String getMaSP(){
//        return this.maSP;
//    }
//    public int getGiaBan(){
//        return this.giaBan;
//    }
//    public int getThoiHanBaoHanh(){
//        return this.thoiHanBaoHanh;
//    }
//}
//
//class KhachHang implements Comparable<KhachHang>{
//    private String maKH, hoTen, diaChi;
//    private SanPham sp;
//    private int soLuong;
//    private String ngayMua;
//
//    public KhachHang(int maKH, String hoTen, String diaChi, SanPham sp, int soLuong, String ngayMua) {
//        this.maKH = String.format("KH%02d", maKH);
//        this.hoTen = hoTen;
//        this.diaChi = diaChi;
//        this.sp = sp;
//        this.soLuong = soLuong;
//        this.ngayMua = ngayMua;
//    }
//    public int getThanhToan(){
//        return this.soLuong * this.sp.getGiaBan();
//    }
//    public String getNgayHetHanBaoHanh(){
//        DateTimeFormatter format = DateTimeFormatter.ofPattern("dd/MM/yyyy");
//        LocalDate mua = LocalDate.parse(this.ngayMua, format);
//        LocalDate hethan = mua.plusMonths(this.sp.getThoiHanBaoHanh());
//        return hethan.format(format);
//    }
//    @Override
//    public String toString(){
//        return this.maKH + " " + this.hoTen + " " + this.diaChi + " " + this.sp.getMaSP() + " " + this.getThanhToan() + " " + this.getNgayHetHanBaoHanh();
//    }
//
//    @Override
//    public int compareTo(KhachHang o) {
//        DateTimeFormatter format = DateTimeFormatter.ofPattern("dd/MM/yyyy");
//        LocalDate a = LocalDate.parse(this.getNgayHetHanBaoHanh(), format);
//        LocalDate b = LocalDate.parse(o.getNgayHetHanBaoHanh(), format);
//        if(a.isBefore(b)) return -1;
//        return 1;
//    }
//}
//
//public class BaoHanhSanPham {
//    public static void main(String[] args) throws FileNotFoundException {
//        Scanner sc = new Scanner(new File("MUAHANG.in"));
//        int n = sc.nextInt();
//        SanPham[] dssp = new SanPham[n];
//        HashMap<String, SanPham> ds = new HashMap<>();
//        for(int i = 0; i < n; i++){
//            sc.nextLine();
//            String masp = sc.nextLine();
//            String tensp = sc.nextLine();
//            dssp[i] = new SanPham(masp, tensp, sc.nextInt(), sc.nextInt());
//            ds.put(masp, dssp[i]);
//        }
//        int m = sc.nextInt();
//        KhachHang[] dskh = new KhachHang[m];
//        for(int i = 0; i < n; i++){
//            sc.nextLine();
//            String ten = sc.nextLine();
//            String dc = sc.nextLine();
//            String masp = sc.nextLine();
//            int soluong = sc.nextInt();
//            String ngay = sc.next();
//            dskh[i] = new KhachHang(i+1, ten, dc, ds.get(masp), soluong, ngay);
//        }
//        Arrays.sort(dskh);
//        for(KhachHang x : dskh){
//            System.out.println(x);
//        }
//    }
//}
