
public class BangDiemTS implements Comparable<BangDiemTS>{
    private String id, name;
    private double toan, ly, hoa;

    public BangDiemTS(String id, String name, double toan, double ly, double hoa) {
        this.id = id;
        this.name = name;
        this.toan = toan;
        this.ly = ly;
        this.hoa = hoa;
    }
    public String getUutien(){
        String res = this.id.substring(0, 3);
        if(res.equals("KV1")) return "0.5";
        else if(res.equals("KV2")) return "1";
        return "2.5";
    }
    public String getTongDiem(){
        double res = this.toan * 2 + this.ly + this.hoa;
        if(res == (int)res) return Integer.toString((int) res);
        return Double.toString(res);
    }
    public String getDiemXetTuyen(){
        double res = Double.parseDouble(this.getTongDiem()) + Double.parseDouble(this.getUutien());
        if((int)res == res) return Integer.toString((int)res);
        return Double.toString(res);
    }
    public String getKQ(){
        if(Double.parseDouble(this.getTongDiem()) + Double.parseDouble(this.getUutien()) >= 24) return "TRUNG TUYEN";
        return "TRUOT";
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.getUutien() + " " + this.getDiemXetTuyen() + " " + this.getKQ();
    }

    @Override
    public int compareTo(BangDiemTS o) {
        Double a = Double.parseDouble(this.getDiemXetTuyen());
        Double b = Double.parseDouble(o.getDiemXetTuyen());
        if(a != b){
            if(a > b) return -1;
            return 1;
        }
        return this.id.compareTo(o.id);
    }
}
