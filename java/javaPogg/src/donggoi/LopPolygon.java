/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package donggoi;
import java.util.*;
import java.io.*;

class Point {
    int x, y;

    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
}


class Polygon {
    private Point[] points;

    public Polygon(Point[] points) {
        this.points = points;
    }

    public double getArea() {
        double area = 0.0;
        int n = points.length;
        for (int i = 0; i < n; i++) {
            int j = (i + 1) % n;
            area += (points[i].x * points[j].y) - (points[j].x * points[i].y);
        }
        return Math.abs(area) / 2.0;
    }
}


public class LopPolygon {
    public static void main(String[] args) throws FileNotFoundException {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while(t-- > 0) {
            int n = in.nextInt();
            Point[] p = new Point[n];
            for(int i = 0; i < n; i++) {
                p[i] = new Point(in.nextInt(), in.nextInt());
            }
            Polygon poly = new Polygon(p);
            System.out.printf("%.3f\n", poly.getArea());
        }
    }
}

