import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n,k,p,q;

        Scanner getScanner = new Scanner(System.in);

        n = getScanner.nextInt();
        k = getScanner.nextInt();
        p = getScanner.nextInt();
        q = getScanner.nextInt();


        if ((n-k) > (p-q)) System.out.println("Shekarestan");
        else if ((n-k) < (p-q)) System.out.println("Namakestan");
        else System.out.println("Equal");
    }
}
