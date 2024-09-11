import java.util.*;

public class GiangVien {
    private String id, name, boMon;
    
    public String getId() {
            return this.id;
        }
    public GiangVien(int id, String name, String boMon) {
        this.id = String.format("GV%02d", id);
        this.name = name;
        this.boMon = boMon;
    }
    public String getMon(){
        return this.boMon;
    }
    public String getboMon(){
        String ans = "";
        String arr[] = this.boMon.split("\\s+");
        for(String x : arr){
            ans += Character.toUpperCase(x.charAt(0));
        }
        return ans;
    }
    public String getFullName(){
        return this.name;
    }
    public String getName(){
        String arr[] = this.name.split("\\s+");
        return arr[arr.length-1];
    }
    public static String vietTat(String s){
        String ans = "";
        String arr[] = s.split("\\s+");
        for(String x : arr){
            ans += Character.toUpperCase(x.charAt(0));
        }
        return ans;
    }
    
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.getboMon();
    }
}
