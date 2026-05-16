import java.util.Scanner;

public class Main {

    static int factorial(int x){
        if (x <= 1) return 1;
        else return factorial(x-1)*x;
    }
    public static void main(String[] args) {
        Scanner getScanner = new Scanner(System.in);

        int n = getScanner.nextInt();

        System.out.println(factorial(n));
    }
}
