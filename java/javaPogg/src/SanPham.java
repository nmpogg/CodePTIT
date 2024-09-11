


public class SanPham {
    private String id, name;
    private int price, asr;

    public SanPham(String id, String name, int price, int asr) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.asr = asr;
    }
    public int getPrice(){
        return this.price;
    }
    public String getId(){
        return this.id;
    }
    @Override
    public String toString(){
        return this.id + " " + this.name + " " + this.price + " " + this.asr;
    }
}
