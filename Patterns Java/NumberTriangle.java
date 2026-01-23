import java.util.Scanner;

public class NumberTriangle {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {        // rows
            for (int j = 1; j <= i; j++) {    // repetition
                System.out.print(i + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
