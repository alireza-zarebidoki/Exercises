import java.util.Scanner;

public class Main2 {

    public static void main(String[] args) {

        //Variables
        int n;
        int spaces;

        //Input
        Scanner getScanner = new Scanner(System.in);

        n = getScanner.nextInt();


        //Calculation & Output
        for (int i = -n; i <= n; i++) {
            spaces = Math.abs(i);

            for (int j = 0; j < spaces; j++) {
                System.out.print(" ");
            }
            for (int j = (n-spaces)*2+1; j > 0; j--) {
                System.out.print("*");
            }
            System.out.print("\n");
        }

        getScanner.close();
    }
}
