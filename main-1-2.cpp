#include <iostream>
using namespace std;
extern void modifyArray(double* array, int size, double value);
int main() {
    const int size = 5;
    double myArray[size] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double value = 2.0;
    modifyArray(myArray, size, value);
    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    return 0;
}
