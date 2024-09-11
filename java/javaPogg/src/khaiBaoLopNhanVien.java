import java.util.*;

class Employee{
    private String id, name, sex, ns, dc, mst, date;
    Employee(){}
    Employee(String id, String name, String sex, String ns, String dc, String mst, String date){
        this.id = id;
        this.name = name;
        this.sex = sex;
        this.ns = ns;
        this.dc = dc;
        this.mst = mst;
        this.date = date;
    }
    public String toString(){
        return id + " " + name + " " + sex + " " + ns + " " + dc + " " + mst + " " + date;
    }
}
        
public class khaiBaoLopNhanVien {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Employee nv = new Employee("00001", sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
        System.out.println(nv);
    }
}
/*
Nguyen Van Hoa
Nam
22/11/1982
Mo Lao-Ha Dong-Ha Noi
8333123456
31/12/2013
*/