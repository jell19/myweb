import java.util.Scanner;

public class NewtonRaphsonMethod {

    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
        
        System.out.println("Enter the function: ");
        String function = scanner.nextLine();
        
        System.out.println("Enter the initial guess: ");
        double x0 = scanner.nextDouble();
        
        System.out.println("Enter the maximum number of iterations: ");
        int maxIterations = scanner.nextInt();
        
        System.out.println("Enter the tolerance: ");
        double tolerance = scanner.nextDouble();
        
        double x1 = x0;
        
        for (int i = 0; i < maxIterations; i++) {
            double f0 = evaluateFunction(function, x0);
            double f1 = evaluateFunction(function, x1);
            double dfdx = (f1 - f0) / (x1 - x0);
            double x2 = x1 - f1 / dfdx;
            if (Math.abs(x2 - x1) < tolerance) {
                System.out.println("Root found: " + x2);
                return;
            }
            x0 = x1;
            x1 = x2;
        }
        
        System.out.println("Maximum number of iterations exceeded.");
        
    }
    
    private static double evaluateFunction(String function, double x) {
        // evaluate the function using a math library or your own implementation
        return Math.sin(x) - x / 2;
    }

}