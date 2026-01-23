import java.util.Scanner;

public class CenterAlignedNumberPyramid {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of rows: ");
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {

            //  spaces
            for (int space = 1; space <= n - i; space++) {
                System.out.print("  ");
            }

            
            for (int num = 1; num <= i; num++) {
                System.out.print(num + " ");
            }

            
            for (int num = i - 1; num >= 1; num--) {
                System.out.print(num + " ");
            }

            System.out.println();
        }

        sc.close();
    }
}
