#include <iostream>
void modifyArray(double* array, int size, double value) {
    for (int i = 0; i<size; i++) {
        std::cout << array[i] + value << " ";
    }
}