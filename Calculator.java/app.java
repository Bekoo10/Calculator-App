package Calculator;

import java.util.Scanner;

public class Interface {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Operations operations = new Operations();
        boolean exit = false;
        System.out.println("*****Welcome to the Calculator*****\n");

        while (!exit) {
            System.out.print("\nYou can type 'Exit' if you want to exit the program."
                    + "\nPlease enter the operation you want to perform: ");

            String operation = scanner.nextLine().trim();

            if (operation.equalsIgnoreCase("Exit")) {
                System.out.println("\nExiting the program.");
                exit = true;
                break;
            }

            int operatorIndex = -1;
            char[] operators = { '+', '-', '*', '/', '^' };

            for (char op : operators) {
                operatorIndex = operation.indexOf(op);
                if (operatorIndex != -1) {
                    break;
                }
            }

            if (operatorIndex == -1) {
                System.out.println("\nYou have made an invalid operation, please try again.");
                continue;
            }

            String number1 = operation.substring(0, operatorIndex).trim();
            String operator = operation.substring(operatorIndex, operatorIndex + 1);
            String number2 = operation.substring(operatorIndex + 1).trim();

            switch (operator) {
                case "+":
                    System.out.println("\nThe result of your operation is: " + operations.add(number1, number2));
                    break;
                case "-":
                    System.out.println("\nThe result of your operation is: " + operations.subtract(number1, number2));
                    break;
                case "*":
                    System.out.println("\nThe result of your operation is: " + operations.multiply(number1, number2));
                    break;
                case "/":
                    if (number2.equals("0")) {
                        System.out.println("\nCannot divide by 0.");
                    } else {
                        System.out.println("\nThe result of your operation is: " + operations.divide(number1, number2));
                    }
                    break;
                case "^":
                    System.out.println("\nThe result of your operation is: " + operations.power(number1, number2));
                    break;
                default:
                    System.out.println("\nYou have made an invalid operation, please try again.");
            }
        }

    }
}
