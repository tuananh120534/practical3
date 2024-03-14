#include <iostream>
extern void modifyArray(double* array, int size, double value);
int main() {
int size2= 3;
double array2[size2]={1,2,3};
double value2 = 5;
modifyArray(array2,size2,value2);
}