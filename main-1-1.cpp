#include <iostream>
using namespace std;
double arrayMin(double* array, int size);
int main () {
int size1 = 4;
double array1[size1] = {1,3,4,2};
int minInArray = arrayMin(array1, size1);
cout << minInArray << endl;
}
