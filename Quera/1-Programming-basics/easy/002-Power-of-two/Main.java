import java.util.Scanner;


public class Main {

    static int getPowertwo(int x){
        if (x <= 0) return 1;
        else return getPowertwo(x-1)*2;
    }
    public static void main(String[] args) {
        Scanner getScanner = new Scanner(System.in);

        int n = getScanner.nextInt();

        for (int i = 0; true; i++) {
            if(getPowertwo(i) > n){
                System.out.println(getPowertwo(i));
                break;
            }
        }
    }
}
