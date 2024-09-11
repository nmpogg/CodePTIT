
public class SinhVienTT implements Comparable<SinhVienTT> {
    private int stt;
    private String maSV, hoTen, lop, email, DN;

    public SinhVienTT(int stt, String maSV, String hoTen, String lop, String email, String DN) {
        this.stt = stt;
        this.maSV = maSV;
        this.hoTen = hoTen;
        this.lop = lop;
        this.email = email;
        this.DN = DN;
    }

    public String getDN() {
        return DN;
    }

    @Override
    public int compareTo(SinhVienTT o) {
        return this.maSV.compareTo(o.maSV);
    }
    @Override
    public String toString(){
        return this.stt + " " + this.maSV + " " + this.hoTen + " " + this.lop + " " + this.email + " " + this.DN;
    }
}

