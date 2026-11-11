#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    if(a == 0) {
      return b;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    printf("The Greatest Common Divisor is: %d", gcd(A, B)); 
    return 0;
}
