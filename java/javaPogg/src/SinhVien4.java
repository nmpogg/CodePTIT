import java.util.*;

public class SinhVien4 {
    private String id, name, lop, email;

    public SinhVien4(String id, String name, String lop, String email) {
        this.id = id;
        this.name = name.trim();
        this.lop = lop;
        this.email = email;
    }
    public String getLop(){
        return this.lop;
    }
    public String getID(){
        return this.id;
    }
    public String chuanHoa(){
        String[] a = this.name.split("\\s+");
        String ans = "";
        for(String x : a){
            ans += Character.toUpperCase(x.charAt(0));
            for(int j = 1; j < x.length(); j++){
                ans += Character.toLowerCase(x.charAt(j));
            }
            ans += " ";
        }
        return ans.trim();
    }
    @Override
    public String toString(){
        return this.id + " " + chuanHoa() + " " + this.lop + " " + this.email;
    }
}
