public class OddRowStars {
    public static void main(String[] args) {

        int rows = 6;

        for (int i = 1; i <= rows; i++) {

            if (i % 2 != 0) {   // odd rows
                for (int j = 1; j <= 5; j++) {
                    System.out.print("*");
                }
            }
            System.out.println();
        }
    }
}
