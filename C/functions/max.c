#include <stdio.h>

int maximumOfTwoNumbers(int number1, int number2) {
  if(number1 > number2) {
    return number1;
  }
  else {
    return number2;
  }
}

int main() {
  int number1, number2;
  printf("Enter the first number: ");
  scanf("%d", &number1);
  printf("Enter the second number: ");
  scanf("%d", &number2);
  printf("The max is: %d", maximumOfTwoNumbers(number1, number2));
  return 0;
}
