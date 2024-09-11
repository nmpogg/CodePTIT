import java.util.*;
import java.time.*;
import java.time.format.DateTimeFormatter;
import java.time.temporal.ChronoUnit;

public class KhachHang {
    private String id, name, idRoom, in, out;

    public KhachHang(int id, String name, String idRoom, String in, String out) {
        this.id = String.format("KH%02d", id);
        this.name = name;
        this.idRoom = idRoom;
        this.in = in;
        this.out = out;
    }
    public int getDays(){
        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy");

        LocalDate startDate = LocalDate.parse(this.in, formatter);
        LocalDate endDate = LocalDate.parse(this.out, formatter);
        return (int)ChronoUnit.DAYS.between(startDate, endDate);
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.idRoom + " " + this.getDays();
    }
}

