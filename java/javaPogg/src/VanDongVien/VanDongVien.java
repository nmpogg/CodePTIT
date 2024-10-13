/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package VanDongVien;
import java.time.*;

public class VanDongVien implements Comparable<VanDongVien> {
    private String maVDV, hoTen;
    private LocalDate ns;
    private LocalTime xuatPhat, denDich;

    public VanDongVien(int maVDV, String hoTen, LocalDate ns, LocalTime xuatPhat, LocalTime denDich) {
        this.maVDV = String.format("VDV%02d", maVDV);
        this.hoTen = hoTen;
        this.ns = ns;
        this.xuatPhat = xuatPhat;
        this.denDich = denDich;
    }
    public Duration getUuTien(){
        int age = 2021 - this.ns.getYear();
        if(age < 18) return Duration.ofSeconds(0);
        else if(age < 25) return Duration.ofSeconds(1);
        else if(age < 32) return  Duration.ofSeconds(2);
        return Duration.ofSeconds(3);
    }
    public Duration getThanhTichThucTe(){
        return Duration.between(this.xuatPhat, this.denDich);
    }
    public Duration getThanhTichXepHang(){
        return this.getThanhTichThucTe().minus(this.getUuTien());
    }
    public String formatDate(Duration a){
        long gio = a.toHours();
        long phut = a.toMinutes() % 60;
        long giay = a.getSeconds() % 60;
        return String.format("%02d:%02d:%02d", gio, phut, giay);
    }
    @Override
    public String toString(){
        return this.maVDV + " " + this.hoTen + " " + formatDate(this.getThanhTichThucTe()) + " " + formatDate(this.getUuTien()) +  " " + formatDate(this.getThanhTichXepHang());
    }

    @Override
    public int compareTo(VanDongVien t) {
        return this.getThanhTichXepHang().compareTo(t.getThanhTichXepHang());
    }
}
