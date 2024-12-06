/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh3;

/**
 *
 * @author Admin
 */
public class BaiTap {
    private String mSV, hoTen, baitap;

    public BaiTap(String mSV, String hoTen, String baitap) {
        this.mSV = mSV;
        this.hoTen = hoTen;
        this.baitap = baitap;
    }
    
    public String toString(){
        return this.mSV + " " + this.hoTen + " " + this.baitap;
    }
}
