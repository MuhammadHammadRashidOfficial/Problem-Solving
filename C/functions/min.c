#include <stdio.h>

int Minimum(int a, int b) {
  if(a < b) {
    return a;
  }
  else {
    return b;
  }
}

int main() {
  int a, b;
  printf("Enter the value of a: ");
  scanf("%d", &a);
  printf("Enter the value of b: ");
  scanf("%d", &b);
  printf("The min is: %d", Minimum(a, b));
  return 0;
}
