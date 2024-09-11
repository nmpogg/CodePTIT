import java.util.*;

class Rectange{
    private double width;
    private double height;
    private String color;
    Rectange(){
        width = 1;
        height = 1;
    }
    Rectange(double width, double height, String color){
        this.width = width;
        this.height = height;
        this.color = color;
    }
    
    public double getWidth(){
        return width;
    }
    public void setWidth(double width){
        this.width = width;
    }
    public double getHeight(){
        return height;
    }
    public void setHeight(double height){
        this.height = height;
    }
    public String getColor(){
        return color;
    }
    public void setColor(String color){
        this.color = color;
    }
    public double findArea(){
        return width * height;
    }
    public double findPerimeter(){
        return (height + width) * 2;
    }
}

public class khaiBaoLopHinhChuNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        String s = sc.next();
        String t =  "";
        t += Character.toUpperCase(s.charAt(0));
        for(int i = 1; i < s.length(); i++){
            t += Character.toLowerCase(s.charAt(i));
        }
        if(a <= 0 || b <= 0){
            System.out.println("INVALID");
        }
        else{
            Rectange re = new Rectange(a, b, t);
            System.out.println((int)re.findPerimeter() + " " + (int)re.findArea() + " " + re.getColor());       
        }
        
    }
}
