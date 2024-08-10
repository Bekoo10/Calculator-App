package Calculator;

public class Operations {
    protected static double add(String a, String b) {
        Double number1 = Double.valueOf(a);
        Double number2 = Double.valueOf(b);
        double sum = number1 + number2;
        return sum;
    }

    protected static Double subtract(String a, String b) {
        Double number1 = Double.valueOf(a);
        Double number2 = Double.valueOf(b);
        Double difference = number1 - number2;
        return difference;
    }

    protected static Double divide(String a, String b) {
        Double number1 = Double.valueOf(a);
        Double number2 = Double.valueOf(b);
        Double quotient = number1 / number2;
        return quotient;
    }

    protected static Double multiply(String a, String b) {
        Double number1 = Double.valueOf(a);
        Double number2 = Double.valueOf(b);
        Double product = number1 * number2;
        return product;
    }

    protected static Double power(String a, String b) {
        Double number1 = Double.valueOf(a);
        Double number2 = Double.valueOf(b);
        Double result = Math.pow(number1, number2);
        return result;
    }
}
