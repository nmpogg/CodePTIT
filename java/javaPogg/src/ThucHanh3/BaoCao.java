/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package ThucHanh3;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Admin
 */
public class BaoCao {
    private BaiTap bt;
    private String time;

    public BaoCao(BaiTap bt, String time) {
        this.bt = bt;
        this.time = time;
    }
    public boolean isCaSang(){
        return time.charAt(0) == '0';
    }
    public String toString(){
        SimpleDateFormat fm24 = new SimpleDateFormat("HH:mm");
        SimpleDateFormat fm12 = new SimpleDateFormat("hh:mm");
        Date time24h = null;
        try {
            time24h = fm24.parse(time);
        } catch (ParseException ex) {
            Logger.getLogger(BaoCao.class.getName()).log(Level.SEVERE, null, ex);
        }
        return this.bt + " " + fm12.format(time24h);
    }
}
