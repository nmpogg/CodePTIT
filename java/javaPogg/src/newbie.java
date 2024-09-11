import java.util.Scanner;

/*
-Các kí tự từ a - z có mã ASCII từ 97-122
-Các kí tự từ A - Z có mã ASCII từ 65-90
-Các kí tự từ 0 - 9 có mã ASCII từ 48-57
*/

public class newbie {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int max = 0, min = 0;
        min = (n / 7) * 2;
        n %= 7;
        n %= 5;
        max = min + n;
        System.out.println(min + " " + max);
    }
}