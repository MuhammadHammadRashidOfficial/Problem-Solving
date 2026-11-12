import java.util.Scanner;     

public class PrimeFactors {
    public static void main(String[] args) {
      Scanner scanner = new Scanner(System.in);
      System.out.print("Enter a number: ");
      int number = scanner.nextInt();
      if(number <= 1) {
          System.out.print("Prime factors do not exist");
          return;
      }
      System.out.print("Prime factors of " + number + " are: ");
      
      for (int i = 2; i <= number; i++) {
         while (number % i == 0) {  
            System.out.print(i + " ");
            number = number / i;
         }
      }
   }
}
