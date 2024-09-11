import java.io.*;
import java.util.*;

public class HelloFile {
    public static void main(String[] args){
        try{
            File data = new File("Hello.txt");
            Scanner sc = new Scanner(data);      
            while(sc.hasNextLine()){
                System.out.println(sc.nextLine());
            }
        } catch(Exception e){};
        
    }
}
