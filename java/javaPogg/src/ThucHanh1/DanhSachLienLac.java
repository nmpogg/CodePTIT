/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ThucHanh1;
import java.util.*;
import java.io.*;

class SinhVien implements Comparable<SinhVien>{
    private String id, name, classroom, email, phone;

    public SinhVien(String id, String name, String classroom, String email, String phone) {
        this.id = id;
        this.name = name;
        this.classroom = classroom;
        this.email = email;
        this.phone = '0' + phone;
    }

    @Override
    public int compareTo(SinhVien o) {
        if(this.classroom.equals(o.classroom)) return this.id.compareTo(o.id);
        return this.classroom.compareTo(o.classroom);
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.classroom + " " + this.email + " " + this.phone;
    }
    
}
public class DanhSachLienLac {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner sc = new Scanner(new File("DANHSACH.in"));
        ArrayList<SinhVien> ds = new ArrayList<>();
        while(sc.hasNextLine()){
            SinhVien x = new SinhVien(sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine(), sc.nextLine());
            ds.add(x);
        }
        Collections.sort(ds);
        for(SinhVien x : ds){
            System.out.println(x);
        }
    }
}

/*
B21DCCN123
Tran Van Toan
D21CQCN01-B
toantv@gmail.com
987654321
B21DCCN111
Ly Van Binh
D21CQCN01-B
binhlv@gmail.com
978652142
B21DCAT661
Hoang Tam Anh
D21CQAT01-B
anhht@gmail.com
966554321
*/