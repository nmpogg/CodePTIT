import java.util.*;

public class DienTichHinhTrongNgoaiTiepTamGiac {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t-- > 0){
            Point p1 = new Point(sc.nextDouble(), sc.nextDouble());
            Point p2 = new Point(sc.nextDouble(), sc.nextDouble());
            Point p3 = new Point(sc.nextDouble(), sc.nextDouble());
            double a = Point.distance(p1, p2);
            double b = Point.distance(p1, p3);
            double c = Point.distance(p2, p3);
            if(a + b > c && a + c > b && b + c > a){
                double S = Math.sqrt((a + b + c) * (a + b - c) * (a - b + c) * (-a + b + c)) / 4;
                double R = a * b * c / (4 * S);
                System.out.printf("%.3f\n", Math.PI * R * R);
            }
            else System.out.println("INVALID");
        }
    }
}
