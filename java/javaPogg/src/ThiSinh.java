import java.util.*;

public class ThiSinh{
    private int id;
    private String name;
    private String birthDay;
    private double point1, point2, point3, all;
    private static int count = 0;
    
    ThiSinh(){};
    ThiSinh(String name, String birthDay, double point1, double point2, double point3){
        count++;
        this.id = count;
        this.name = name;
        this.birthDay = birthDay;
        this.point1 = point1;
        this.point2 = point2;
        this.point3 = point3;
        this.all = point1 + point2 + point3;
    }
    public double getPoint(){
        return this.point1 + this.point2 + this.point3;
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.birthDay + " " + this.all;
    }
}
