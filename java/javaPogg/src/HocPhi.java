
import java.util.*;

import view.InvoiceView;
import vn.edu.ptit.Invoice;
import vn.edu.ptit.Rule;
import vn.edu.ptit.Student;
import vn.edu.ptit.Subject;



class PaymentController{
    Scanner sc = new Scanner(System.in);
    public Invoice getInvoice(){
        Student x = new Student(sc.nextLine(), sc.nextLine());
        int n = sc.nextInt();
        ArrayList<Subject> ds = new ArrayList<>();
        for(int i = 0; i < n; i++){
            sc.nextLine();
            String code = sc.nextLine();
            String name = sc.nextLine();
            int tinChi = sc.nextInt();
            Subject y = new Subject(name, code, tinChi);
            ds.add(y);
        }
        sc.nextLine();
        Rule z = new Rule(sc.nextLine(), sc.nextLine(), sc.nextDouble());
        Invoice ans = new Invoice(z);
        ans.setId(1);
        ans.setSt(x);
        ans.setAlSubject(ds);
        double hocPhi = 0;
        for(Subject res : ds){
            hocPhi += z.getCreditPrice() * res.getCredit();
        }
        ans.setAmount(hocPhi);
        return ans;
    }
}

public class HocPhi {
    public static void main(String[] args) {
        PaymentController pc = new PaymentController();
        //Output for test
        Invoice invoice = pc.getInvoice();
        InvoiceView.show(invoice);
    }
}
/*
B20DCCN001
Nguyễn Văn A
2
INT1155
Tin học cơ sở 2
2
INT1332
Lập trình hướng đối tượng
3
QD123
QD123 HP
550000
*/