import java.util.*;

public class DoanhNghiep {
    private String id, name;
    private int numSV;

    public DoanhNghiep(String id, String name, int numSV) {
        this.id = id;
        this.name = name;
        this.numSV = numSV;
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.numSV;
    }

    public String getId() {
        return id;
    }

    public int getNumSV() {
        return numSV;
    }
}
