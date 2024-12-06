/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh2.Bai9;

/**
 *
 * @author Admin
 */
public class DangKi implements Comparable<DangKi> {
    private SinhVien sv;
    private String size;

    public DangKi(SinhVien sv, String size) {
        this.sv = sv;
        this.size = size;
    }
    public String getSize() {
        return size;
    }
    public String getGioiTinhSV(){
        return this.sv.getGioitinh();
    }
    @Override
    public String toString(){
        return "" + sv;
        
    }

    @Override
    public int compareTo(DangKi o) {
        return this.sv.getMaSV().compareTo(o.sv.getMaSV());
    }
}
