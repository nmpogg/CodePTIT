import java.util.Scanner;

public class chuanHoaXauHoTen {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while(t-- > 0){     
            String s = sc.nextLine().trim();
            StringBuilder sb = new StringBuilder("");
            String[] arr = s.split("\\s+");
            for(String x : arr){
                sb.append(Character.toUpperCase(x.charAt(0)));
                for(int j = 1; j < x.length(); j++){
                    sb.append(Character.toLowerCase(x.charAt(j)));
                }
                sb.append(" ");
            }
            sb.deleteCharAt(sb.length() - 1);
            System.out.println(sb.toString());
        }
    }
}