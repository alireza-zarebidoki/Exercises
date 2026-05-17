import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        //Variables
        int a,b,c;
        int x,y,z; // x >= y,z
        boolean IS_PYTHAGOREAN = false;

        //Input
        Scanner getScanner = new Scanner(System.in);
        a = getScanner.nextInt();
        b = getScanner.nextInt();
        c = getScanner.nextInt();


        //Calculation
        if (a>b && a>c) {x=a; y=b; z=c;}
        else if (b>a && b>c) {x=b; y=a; z=c;}
        else {x=c; y=a; z=b;}

        if (x*x == (y*y) + (z*z)) IS_PYTHAGOREAN = true;



        //Output
        if (IS_PYTHAGOREAN) System.out.println("YES");
        else System.out.println("NO");


    }
}
