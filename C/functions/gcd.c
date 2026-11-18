#include <stdio.h>

int greatestCommonDivisor(int number1, int number2) {
    if (number2 == 0) {
        return number1;
    }
    if(number1 == 0) {
      return number2;
    }
    else {
        return greatestCommonDivisor(number2, number1 % number2);
    }
}

int main() {
    int number1, number2;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    printf("The Greatest Common Divisor is: %d", greatestCommonDivisor(number1, number2)); 
    return 0;
}
