#include <stdio.h>

int Maximum(int a, int b) {
  if(a > b) {
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
  printf("The max is: %d", Maximum(a, b));
  return 0;
}
