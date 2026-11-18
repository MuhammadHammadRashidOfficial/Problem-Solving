#include <stdio.h>
int main() {
  int number1, number2;
  printf("Enter the first number: ");
  scanf("%d", &number1);
  printf("Enter the second number: ");
  scanf("%d", &number2);
  int productResult = number1 * number2;
  printf("The answer is: %d", &productResult);
  return 0;
}
