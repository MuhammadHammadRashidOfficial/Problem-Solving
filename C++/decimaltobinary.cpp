#include <iostream>
using namespace std;

void decimalToBinaryConversion(int number) {
  int binnum[32];
  int i = 0;
  while(number > 0) {
    binnum[i] = number % 2;
    number = number / 2;
    i++;
  }
  cout << "Binary number is: ";
  for(int j = i - 1; j >= 0; j--) {
    cout << binnum[j];
  }
}

int main() {
  int n;
  cout << "Enter the number: ";
  cin >> n;
  decimalToBinaryConversion(n);
  return 0;
}
