#include <iostream>

using namespace std;

class BinarySearch {
public:
    int binarySearch(int);
};

int BinarySearch::binarySearch(int key) {
    int i = 0;
    int j = 9;
    int k;
    int A[10] = {2,4,6,8,10,12,14,16,18,20};
    int count = 0;

    do {
        count++;
        k = (i+j)/2;
        if(A[k] == key) {
            break;
        }
        else if(A[k] < key){
            i=k+1;
        }
        else {
            j=k-1;
        }

    }
    while(i <= j);
    return count;
}

int main() {
    BinarySearch obj;
    cout <<"Search 1, " << obj.binarySearch(1) << "times" << endl;
    cout << "Search 3, " << obj.binarySearch(3) << "times" << endl;
    cout << "Search 13, " << obj.binarySearch(13) << "times" << endl;
    cout << "Search 21, " << obj.binarySearch(21) << "times" << endl;
    return 0;
}