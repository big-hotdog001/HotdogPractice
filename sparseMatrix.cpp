#include <iostream>
#include <stdlib.h>

using namespace std;

#define width 6
#define height 6

int sourceMatrix[width][height] = {
    0 ,15 ,0 ,0 ,-8 ,0 ,
    0 ,0 ,6 ,0 ,0 ,0 ,
    0 ,0 ,0 ,-6 ,0 ,0 ,
    0 ,0 ,18 ,0 ,0 ,0 ,
    0 ,0 ,0 ,0 ,0 ,16 ,
    72 ,0 ,0 ,0 ,20 ,0  
};

int calculate() {
    int count = 0;
    for(int i = 0;i <= width;i++) {
    for(int j = 0;j <= height;j++){
        if(sourceMatrix[i][j] != 0){count++;}
        }
    }

    return count;
}


class SparseMatrix {
private:
    int nonzero = calculate() + 1;
    int sm[10][3];
};
