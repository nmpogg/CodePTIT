import java.util.*;

class Triangle{
    private Point p1, p2, p3;

    public Triangle(Point p1, Point p2, Point p3) {
        this.p1 = p1;
        this.p2 = p2;
        this.p3 = p3;
    }
    public boolean valid(){
        double a = p1.distance(p2);
        double b = p2.distance(p3);
        double c = p1.distance(p3);
        return (a + b > c && a + c > b && b + c > a);
    }
    public String getPerimeter(){
        double a = p1.distance(p2);
        double b = p2.distance(p3);
        double c = p1.distance(p3);
        return String.format("%.3f", (a + b + c));
    }
}
public class LopTriangle1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            Triangle a = new Triangle(Point.nextPoint(sc), Point.nextPoint(sc), Point.nextPoint(sc));
            if(!a.valid()){
                System.out.println("INVALID");
            } else{
                System.out.println(a.getPerimeter());
            }
        }
    }
}
