public class Name {
    public static void main(String[] args) {

        int rows = 5;

        for (int i = 0; i < rows; i++) {

            // T
            for (int j = 0; j < 5; j++) {
                if (i == 0 || j == 2)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.print("  ");

            // U
            for (int j = 0; j < 5; j++) {
                if ((j == 0 || j == 4) && i != rows - 1 || (i == rows - 1 && j > 0 && j < 4))
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.print("  ");

            // S
            for (int j = 0; j < 5; j++) {
                if (i == 0 || i == rows / 2 || i == rows - 1 ||
                        (i < rows / 2 && j == 0) ||
                        (i > rows / 2 && j == 4))
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.print("  ");

            // H
            for (int j = 0; j < 5; j++) {
                if (j == 0 || j == 4 || i == rows / 2)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.print("  ");

            // A
            for (int j = 0; j < 5; j++) {
                if (i == 0 && j > 0 && j < 4 ||
                        i == rows / 2 ||
                        j == 0 && i > 0 ||
                        j == 4 && i > 0)
                    System.out.print("*");
                else
                    System.out.print(" ");
            }
            System.out.print("  ");

            // R
            for (int j = 0; j < 5; j++) {
                if (j == 0 ||
                        (i == 0 && j < 4) ||
                        (i == rows / 2 && j < 4) ||
                        (j == 4 && i > 0 && i < rows / 2) ||
                        (i - j == rows / 2))
                    System.out.print("*");
                else
                    System.out.print(" ");
            }

            System.out.println();
        }
    }
}
