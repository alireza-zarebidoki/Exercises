import java.util.Scanner;

public class Main1 {

    public static void main(String[] args) {

        //Variables
        int n;


        //Input
        Scanner getScanner = new Scanner(System.in);

        n = getScanner.nextInt();


        //Calculation & Output
        for (int i = 0; i <= n; i++) {
            for (int j = n-i; j > 0; j--) {
                System.out.print(" ");
            }
            for (int j = 0; j < (i*2)+1; j++) {
                System.out.print("*");
            }
            System.out.print("\n");
        }

        for (int i = n-1; i >= 0; i--) {
            for (int j = n-i; j > 0; j--) {
                System.out.print(" ");
            }
            for (int j = 0; j < (i*2)+1; j++) {
                System.out.print("*");
            }
            System.out.print("\n");
        }

        getScanner.close();
    }
}
