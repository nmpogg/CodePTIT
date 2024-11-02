package danhsachsinhvien1;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.io.Serializable;

public class SinhVien implements Serializable {
    private String ma, ten, lop;
    private Date ngaysinh;
    private float gpa;

    public SinhVien(int id, String ten, String lop, String ngaysinh, float gpa) throws ParseException {
        this.ma = String.format("B20DCCN%03d", id);
        this.ten = ten;
        this.lop = lop;
        
        SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");
        this.ngaysinh = formatter.parse(ngaysinh);
        
        this.gpa = gpa;
    }

    @Override
    public String toString() {
        SimpleDateFormat formatter = new SimpleDateFormat("dd/MM/yyyy");
        return String.format("%s %s %s %s %.2f", ma, ten, lop, formatter.format(ngaysinh), gpa);
    }
}
