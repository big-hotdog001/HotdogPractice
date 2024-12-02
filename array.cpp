#include <iostream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

void ex1();
void ex2(int x);

int main() {
    ex2(1);
    return 0;
}

void ex1() {
    int a[] = {0, 1, 2, 3, 4, 5};
    int *ptr = a;
    cout <<  a[2] << "\n" << ptr+2 << "\n" << *(ptr+2) << endl;
}

void ex2(int x) {
    int i = 0;
    int j = 9;
    int k;
    int A[] = {2,4,6,8,10,12,14,16,18,20};
    do {
        k = (i + j)/2;
        if (A[k] <= x) {
            i = k+1;
        }
        else {
            j = k-1;
        }
    }
    while(i <= j);
}