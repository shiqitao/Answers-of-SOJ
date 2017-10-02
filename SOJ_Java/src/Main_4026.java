import java.util.Scanner;

public class Main_4026 {
    final static int Offset = 29;

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        char[] charArrays = new char[4];
        charArrays = scanner.next().toCharArray();
        if (charArrays[3] > '9' && charArrays[3] < '0') {
            System.out.print("Error!");
        } else {
            for (char i : charArrays) {
                i += Offset;
                System.out.print(i);
            }
        }
    }
}