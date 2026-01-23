public class AlternatingStarSpace {
    public static void main(String[] args) {

        int n = 10;   // length of line

        for (int i = 1; i <= n; i++) {

            if (i % 2 == 1)
                System.out.print("*");
            else
                System.out.print(" ");

        }
    }
}
