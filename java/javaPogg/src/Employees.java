import java.util.*;



public class Employees {
    private String id, name, sex, birth, dc, mst, ngay;
    Employees(){};

    Employees(int id, String name, String sex, String birth, String dc, String mst, String ngay) {
        this.id = "" + String.format("%05d", id);
        this.name = name;
        this.sex = sex;
        this.birth = birth;
        this.dc = dc;
        this.mst = mst;
        this.ngay = ngay;
    }
    public String getBirth(){
        return this.birth;
    }
    public String toString(){
        return this.id + " " + this.name + " " + this.sex + " " + this.birth + " " + this.dc + " " + this.mst + " " + this.ngay;
    }
}
