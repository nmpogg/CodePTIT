
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Admin
 */
public class Point{
    private double x, y;
    Point(){};
    Point(double x, double y){
        this.x = x;
        this.y = y;
    }
    Point(Point p){
        this.x = p.x;
        this.y = p.y;
    }
    public static Point nextPoint(Scanner sc){
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        return new Point(a, b);
    }
    public double getX(){
        return x;
    }
    public double getY(){
        return y;
    }
    public double distance(Point secondPoint){
        return Math.sqrt((this.x - secondPoint.x) * (this.x - secondPoint.x) + (this.y - secondPoint.y) * (this.y - secondPoint.y));
    }
    public static double distance(Point p1, Point p2){
        return Math.sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
    }  
    @Override
    public String toString(){
        return x + " " + y;
    }
}
