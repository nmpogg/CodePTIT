import java.util.*;



public class chuViTamGiac {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            Point p1 = new Point(sc.nextDouble(), sc.nextDouble());
            Point p2 = new Point(sc.nextDouble(), sc.nextDouble());
            Point p3 = new Point(sc.nextDouble(), sc.nextDouble());
            double kc1 = Point.distance(p1, p2);
            double kc2 = Point.distance(p1, p3);
            double kc3 = Point.distance(p2, p3);
            if(kc1 + kc2 > kc3 && kc1 + kc3 > kc2 && kc2 + kc3 > kc1){
                System.out.printf("%.3f", kc1 + kc2 + kc3);
                System.out.println("");
            }
            else System.out.println("INVALID");
        }
    }
}
