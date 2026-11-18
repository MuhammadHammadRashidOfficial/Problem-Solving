#include <stdio.h>

int factorial(int number) {
  if(number == 0 || number == 1) {
    return number;
  }
  return number * factorial(number - 1);
}

int main() {
  int number;
  printf("Enter the value of number: ");
  scanf("%d", &number);
  printf("Factorial is: %d", factorial(number));
  return 0;
}
