#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <array>

using namespace std;

void ex1();
void ex2(int x);
void accessMatrix(int A[] ,int B[]);

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

//矩陣相乘
/*
void accessMatrix(int A[] ,int B[]) {
    int i,j,k = 0;
    int C[][];
    int sum;
    int N;
    for(i = 0;i < N;i++){
        for(j = 0;j < N;j++) {
            sum = 0;
            for(k = 0;k < N;k++) {
                sum += A[i][k] * B[k][j];
            }
            C[i][j] = sum;
        }
    }
}
*/