import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        //Variables
        String n;
        boolean IS_PALINDROME = true;
        int length = 0;

        //Input
        Scanner getScanner = new Scanner(System.in);
        n = getScanner.nextLine();


        //Calculation
        length = n.length();
        for (int i = 0; i < length/2; i++) {
            if (n.charAt(i)!=n.charAt(length-1-i)) {
                IS_PALINDROME = false;
                break;
            }
        }


        //Output
        if (IS_PALINDROME) System.out.println("YES");
        else System.out.println("NO");



    }
}
