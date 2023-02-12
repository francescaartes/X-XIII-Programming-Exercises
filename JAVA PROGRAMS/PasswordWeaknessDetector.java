import java.util.Scanner;

public class PasswordWeaknessDetector {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter your password: ");
        String password = input.nextLine();

        boolean hasLowerCase = false;
        boolean hasUpperCase = false;
        boolean hasDigit = false;
        boolean hasSpecialChar = false;
        boolean isConsecutiveLowercase = false;
        boolean isConsecutiveUppercase = false;
        boolean isConsecutiveDigit = false;
        boolean isRepeating = false;

        for (int i = 0; i < password.length(); i++) {
            char character = password.charAt(i);
            if (Character.isLowerCase(character)) {
                hasLowerCase = true;
                if (i < password.length() - 1 && Character.isLowerCase(password.charAt(i + 1)) && character == password.charAt(i + 1)) {
                    isConsecutiveLowercase = true;
                }
            } else if (Character.isUpperCase(character)) {
                hasUpperCase = true;
                if (i < password.length() - 1 && Character.isUpperCase(password.charAt(i + 1)) && character == password.charAt(i + 1)) {
                    isConsecutiveUppercase = true;
                }
            } else if (Character.isDigit(character)) {
                hasDigit = true;
                if (i < password.length() - 1 && Character.isDigit(password.charAt(i + 1)) && character == password.charAt(i + 1)) {
                    isConsecutiveDigit = true;
                }
            } else if (!Character.isLetterOrDigit(character)) {
                hasSpecialChar = true;
            }
            if (i < password.length() - 2 && password.charAt(i) == password.charAt(i + 1) && password.charAt(i + 1) == password.charAt(i + 2)) {
                isRepeating = true;
            }
        }
        if (password.length() < 8) {
            System.out.println("\tPassword is too short");
        }
        if (!hasLowerCase || !hasUpperCase) {
            System.out.println("\tPassword must contain at least one uppercase letter and one lowercase letter");
        }
        if (!hasDigit) {
            System.out.println("\tPassword must contain at least one numeric digit");
        }
        if (!hasSpecialChar) {
            System.out.println("\tPassword must contain at least one special character");
        }
        if (isConsecutiveLowercase) {
            System.out.println("\tPassword cannot contain a sequence of consecutive lowercase letters");
        }
        if (isConsecutiveUppercase) {
            System.out.println("\tPassword cannot contain a sequence of consecutive uppercase letters");
        }
        if (isConsecutiveDigit) {
            System.out.println("\tPassword cannot contain a sequence of consecutive digits");
        }
        if (isRepeating) {
            System.out.println("\tPassword cannot contain a repeating sequence of characters");
        }
        if (password.length() >= 8 && hasLowerCase && hasUpperCase && hasDigit && hasSpecialChar && !isConsecutiveLowercase && 
            !isConsecutiveUppercase && !isConsecutiveDigit && !isRepeating) {
            System.out.println("\tPassword is strong");
        }
        input.close();
    }
}
