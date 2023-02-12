import java.util.Scanner;

public class RecursivePowerMethod {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int base, exponent;

        System.out.print("Enter the number to be raised: ");
        base = input.nextInt();

        System.out.print("Enter the exponent: ");
        exponent = input.nextInt();

        System.out.println(base + " raised to " + exponent + " is equal to " + power(base, exponent));
        System.out.println("\t" + base + "^" + exponent + " = " + power(base, exponent));
        input.close();
    }
    public static int power(int base, int exponent) {
        if (exponent == 0) return 1;
        else return base * power(base, exponent-1);
    }
}