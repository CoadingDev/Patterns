import java.util.Scanner;

public class Horizontal_star {
    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size: ");
        int n = sc.nextInt();

    
        for(int i = 1; i < n; i++) {
            System.out.println("*");
        }

    }
}