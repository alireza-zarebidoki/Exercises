import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        //Variables
        int a,b;
        boolean[] isPrime = new boolean[10001];


        //Input
        Scanner getScanner = new Scanner(System.in);
        a = getScanner.nextInt();
        b = getScanner.nextInt();


        //Calculation
        for (int i = 2; i < 10001; i++) {
            isPrime[i] = true;
        }

        for (int i = 2; i < 10001; i++) {
            if (isPrime[i]) {
                for (int j = i*i; j <= b; j+=i) {
                    isPrime[j] = false;
                }
            }
        }


        //Output
        for (int i = a; i <= b; i++) {
            if (isPrime[i]) {
                System.out.println(i);
            }
        }
    }
}
