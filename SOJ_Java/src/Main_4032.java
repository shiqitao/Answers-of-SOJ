import java.util.Scanner;

public class Main_4032 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double a = scanner.nextDouble();
        double b = scanner.nextDouble();
        double c = scanner.nextDouble();
        if (a <= 0 || b <= 0 || c <= 0) {
            System.out.print(-1);
            return;
        }
        double x, y, z;
        if (a >= b) {
            if (a >= c) {
                x = a;
                y = b;
                z = c;
            } else {
                x = c;
                y = a;
                z = b;
            }
        } else {
            if (b >= c) {
                x = b;
                y = a;
                z = c;
            } else {
                x = c;
                y = a;
                z = b;
            }
        }
        if (x >= y + z)
            System.out.print(-1);
        else {
            if (y * y + z * z == x * x)
                System.out.print(1);
            else
                System.out.print(0);
        }
        return;
    }
}
