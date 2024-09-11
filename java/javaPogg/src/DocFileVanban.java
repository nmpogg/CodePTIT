import java.util.*;
import java.io.*;

public class DocFileVanban {
    public static void main(String[] args) {
        try{
            File data = new File("DATA.in");
            Scanner sc = new Scanner(data);
            while(sc.hasNextLine()){
                System.out.println(sc.nextLine());
            }
        } catch(Exception e){};
    }
}
