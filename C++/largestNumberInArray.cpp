
#include <iostream>
using namespace std;

// Input in the array
void inputInArray(int arr[], int lengthOfArray) {
    cout << "Enter the input in array" << endl;
    for(int i = 0; i < lengthOfArray; i++) {
        cin >> arr[i];
    }
}

// Display the array
void displayTheArray(int arr[], int lengthOfArray) {
    for(int i = 0; i < lengthOfArray; i++) {
        cout << arr[i] << " ";
    }
}

// FInd the largest number in an array
int largestNumberInAnArray(int arr[], int lengthOfArray) {
    int maximumNumber = arr[0];
    for(int i = 1; i < lengthOfArray; i++) {
        if(maximumNumber < arr[i]) {
            maximumNumber = arr[i];
        }
    }
    return maximumNumber;
}

// Main
int main() {

    int arr[100] = {};
    int size;

    cout << "Enter the length of array: ";
    cin >> size;

    if(size > 100) {
        cout << "Array size cannot exceed 100" << endl;
        return 0;
    }
    else if(size <= 0) {
        cout << "Array size cannot be 0 or less than 0" << endl;
        return 0;
    }
    
    inputInArray(arr, size);
    displayTheArray(arr, size);
    
    cout << endl;
    
    cout << "Largest number: " << largestNumberInAnArray(arr, size);

    return 0;
}
