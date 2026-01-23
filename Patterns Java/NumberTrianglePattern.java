import java.util.Scanner;

public class NumberTrianglePattern {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of triangle: ");
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {          // rows
            for (int j = 1; j <= i; j++) {      // numbers
                System.out.print(j + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
