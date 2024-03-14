#include <iostream>
using namespace std;
extern double* duplicateArray(double* array, int size);
int main() {
    double originalArray[] = {1.2, 3.4, 5.6, 7.8, 9.0};
    int size = sizeof(originalArray) / sizeof(originalArray[0]);
    double* newArray = duplicateArray(originalArray, size);
    cout << "New array: ";
    for (int i = 0; i < size; i++) {
        cout << newArray[i] << " ";
    }
    cout << endl;
    delete[] newArray;

    return 0;
}
