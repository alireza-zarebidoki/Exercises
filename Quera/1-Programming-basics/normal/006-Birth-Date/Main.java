import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner getScanner = new Scanner(System.in);

        String input = getScanner.next();

        System.out.println("saal:"+input.charAt(0)+input.charAt(1));
        System.out.println("maah:"+input.charAt(2)+input.charAt(3));
    }
}
