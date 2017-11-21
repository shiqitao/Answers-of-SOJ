import java.util.Scanner;

public class Main_4033 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int year = scanner.nextInt();
        int month = scanner.nextInt();
        if (year < 0 || year > 10000 || month < 1 || month > 12) {
            System.out.print("Error!");
            return;
        }
        int[] day = new int[]{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        if (month != 2)
            System.out.print(day[month - 1]);
        else if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
            System.out.print(29);
        else
            System.out.print(28);
        return;
    }
}