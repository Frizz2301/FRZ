import java.util.Scanner;

public class HitungPPN {
    // Function to calculate PPN
    public static double calculatePPN(double totalPurchase) {
        return totalPurchase * 0.10;
    }

    // Procedure to display the calculation result
    public static void displayResult(double totalPurchase, double ppn) {
        System.out.printf("Total Purchase: Rp %.2f%n", totalPurchase);
        System.out.printf("PPN (10%%): Rp %.2f%n", ppn);
        System.out.printf("Total Payment: Rp %.2f%n", totalPurchase + ppn);
    }

    public static void main(String[] args) {
        try (Scanner input = new Scanner(System.in)) {
            // Input total purchase from user
            System.out.print("Enter total purchase: Rp ");
            double totalPurchase = input.nextDouble();

            // Calculate PPN
            double ppn = calculatePPN(totalPurchase);

            // Display calculation result
            displayResult(totalPurchase, ppn);
        }
    }
}