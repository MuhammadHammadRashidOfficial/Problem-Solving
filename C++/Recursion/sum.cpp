#include <iostream>
using namespace std;

int Sum(int number) {
  if(number == 0 ||number == 1) {
    return number;
  }
  else {
    return number + Sum(number - 1);
  }
}

int main() {
  int number;
  cout << "Enter the number: ";
  cin >> number;
  if(number < 0) {
      cout << "Unable to give answer." << endl;
  }
  else {
      cout << "Answer is: " << Sum(number) << endl;
  }
}
