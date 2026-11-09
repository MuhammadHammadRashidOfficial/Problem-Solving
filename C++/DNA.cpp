#include <iostream>
using namespace std;

void input(char array[20]) {
    for (int i = 0; i < 20; i++) {
        cout << "Enter the nucleotide at index " << i << ": ";
        cin >> array[i];
    }
}


void capitalize(char array[20]) {
    for (int i = 0; i < 20; i++) {
        if (array[i] >= 97 && array[i] <= 132) {
            array[i] = array[i] - 32;
        }
    }
}

void display(char array[20]) {
    for (int i = 0; i < 20; i++) {
        capitalize(array);
        cout << array[i] << ' ';
    }
    cout << "\n";
}

void displayHistogram(int count) {
    for (int i = 0; i < count; i++) {
        cout << "*";
    }
    cout << "\n";
}

int main() {
    char array[20];
    cout << "Enter the DNA sequence.\n";
    input(array);

    cout << "The DNA sequence is: ";
    display(array);
    
    int countA = 0, countT = 0, countC = 0, countG = 0;
    for (int i = 0; i < 20; i++) {
        if (array[i] != 'A' || array[i] != 'G' ||
            array[i] != 'C' || array[i] != 'T') {
            cout << "The sequence is invalid.\n";
            return 0;
        }
        if (array[i] == 'A') {
            countA++;
        }
        else if (array[i] == 'T') {
            countT++;
        }
        else if (array[i] == 'G') {
            countG++;
        }
        else if (array[i] == 'C') {
            countC++;
        }
    }
    cout << "A:";
    displayHistogram(countA);
    cout << "\n";

    cout << "C:";
    displayHistogram(countC);
    cout << "\n";

    cout << "T:";
    displayHistogram(countT);
    cout << "\n";

    cout << "G:";
    displayHistogram(countG);
    cout << "\n";

    return 0;
}
