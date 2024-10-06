/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ThucHanh1;

import java.util.*;
import java.time.format.DateTimeFormatter;
import java.time.*;
import java.io.*;

class Online implements Comparable<Online>{
    private String name, begin, finish;

    public Online(String name, String begin, String finish) {
        this.name = name;
        this.begin = begin;
        this.finish = finish;
    }
    public long getMinutes(){
        DateTimeFormatter format = DateTimeFormatter.ofPattern("dd/MM/yyyy HH:mm:ss");
        LocalDateTime begin = LocalDateTime.parse(this.begin, format);
        LocalDateTime finish = LocalDateTime.parse(this.finish, format);
        Duration res = Duration.between(begin, finish);
        return res.toMinutes();
    }
    @Override
    public int compareTo(Online o) {
        if(this.getMinutes() != o.getMinutes())
            return (int)(o.getMinutes() - this.getMinutes());
        return this.name.compareTo(o.name);
    }
    @Override
    public String toString(){
        return this.name + " " + this.getMinutes();
    }
}

public class ThongKeThoiGian {
    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(new File("ONLINE.in"));
        int n = sc.nextInt();
        sc.nextLine();
        Online[] ds = new Online[n];
        for(int i = 0; i < n; i++){
            ds[i] = new Online(sc.nextLine(), sc.nextLine(), sc.nextLine());
        }
        Arrays.sort(ds);
        for(Online x : ds){
            System.out.println(x);
        }
    }
}
/*
3
Do Viet Anh
11/12/2021 16:35:00
11/12/2021 17:35:00
Le Tuan Anh
11/12/2021 16:45:00
11/12/2021 18:15:00
Nguyen Tuan Anh
11/12/2021 17:00:00
11/12/2021 19:15:00
*/
