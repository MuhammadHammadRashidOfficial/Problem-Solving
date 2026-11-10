#include <iostream>
using namespace std;

void input(int &x, int &y) {
  cout << "Enter the first number: ";
  cin >> x;
  cout << "Enter the second number: ";
  cin >> y;
}

void printSwappedNumbers(int a, int b) {
    cout << "Swapped value of a: " << a << endl;
    cout << "Swapped value of b: " << b << endl;
}
void swapTwoNumbers(int &a, int &b) {
  input(a, b);
    
  int temp = a;
  a = b;
  b = temp;
    
  printSwappedNumbers(a, b);
}

int main() {
  int a, b, temp;
  swapTwoNumbers(a, b);
  return 0;
}
