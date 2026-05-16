import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        if (!scanner.hasNextInt()) return;

        int n = scanner.nextInt();
        String[] nums = new String[n];
        int maxLength = 0;

        for (int i = 0; i < n; i++) {
            nums[i] = scanner.next();
            if (nums[i].length() > maxLength) {
                maxLength = nums[i].length();
            }
        }

        StringBuilder result = new StringBuilder();
        int carry = 0;

        for (int i = 0; i < maxLength; i++) {
            int sum = carry;

            for (int j = 0; j < n; j++) {
                int index = nums[j].length() - 1 - i;

                if (index >= 0) {
                    sum += nums[j].charAt(index) - '0';
                }
            }

            result.append(sum % 10);
            carry = sum / 10;        
        }

        // اگر در انتها رقم نقلی باقی مانده بود
        while (carry > 0) {
            result.append(carry % 10);
            carry /= 10;
        }

        // چون ارقام را از یکان به جواب اضافه کردیم، باید در نهایت برعکس شود
        System.out.println(result.reverse().toString());

        scanner.close();
    }
}
