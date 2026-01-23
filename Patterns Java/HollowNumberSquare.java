public class HollowNumberSquare {
    public static void main(String[] args) {

        int n = 5;

        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {

                // Top boundary
                if (i == 1)
                    System.out.print(j + " ");

                // Bottom boundary
                else if (i == n)
                    System.out.print((n - j + 1) + " ");

                // Left boundary
                else if (j == 1)
                    System.out.print(i + " ");

                // Right boundary
                else if (j == n)
                    System.out.print((n - i + 1) + " ");

                // Hollow part
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }
}
