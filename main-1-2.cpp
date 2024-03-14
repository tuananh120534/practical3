#include <iostream>
extern void modifyArray(double* array, int size, double value);
int main() {
int size2= 3;
double array2[size2]={1.9,2.8,3.7};
double value2 = 5.0;
modifyArray(array2,size2,value2);
}