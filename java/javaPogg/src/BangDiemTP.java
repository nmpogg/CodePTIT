
public class BangDiemTP {
    private String id, name, classRoom;
    private double point1, point2, point3;

    public BangDiemTP(String id, String name, String classRoom, double point1, double point2, double point3) {
        this.id = id;
        this.name = name;
        this.classRoom = classRoom;
        this.point1 = point1;
        this.point2 = point2;
        this.point3 = point3;
    }

    public String getId() {
        return id;
    }
    public String getName(){
        return this.name;
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.classRoom + " " + String.format("%.1f %.1f %.1f", this.point1, this.point2, this.point3);
    }
}
