import java.util.Scanner;

public class Main_4024 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a = scanner.nextInt();
        int b = scanner.nextInt();
        if (b > 0) {
            System.out.printf("%d+%d=%d%n", a, b, a + b);
            System.out.printf("%d*%d=%d%n", a, b, a * b);
            System.out.printf("%d/%d=%d%n", a, b, a / b);
            System.out.printf("%d%%%d=%d%n", a, b, a % b);
        } else if (b == 0) {
            System.out.printf("%d+0=%d%n", a, a);
            System.out.printf("%d*0=0%n", a);
            System.out.printf("%d/0:Error!%n", a);
            System.out.printf("%d%%0:Error!%n", a);
        } else {
            System.out.printf("%d+(%d)=%d%n", a, b, a + b);
            System.out.printf("%d*(%d)=%d%n", a, b, a * b);
            System.out.printf("%d/(%d)=%d%n", a, b, a / b);
            System.out.printf("%d%%(%d)=%d%n", a, b, a % b);
        }
    }
}