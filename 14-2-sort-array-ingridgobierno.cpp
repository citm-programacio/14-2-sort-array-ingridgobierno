#include <iostream>
using namespace std;

const int arraySize = 10;

void mysort(int* unsorted, int* sorted) {
    for (int i = 0; i < arraySize; ++i) {
        int minIndex = -1;
        int minValue = 1000000; 

        // buscar l'element més petit a l'array no ordenat
        for (int j = 0; j < arraySize; ++j) {
            if (unsorted[j] < minValue) {
                minValue = unsorted[j];
                minIndex = j;
            }
        }

        // copiar l'element més petit a l'array ordenat
        sorted[i] = minValue;

        // marquem aquest element com "utilitzat" posant-li un valor gran
        unsorted[minIndex] = 1000000;
    }
}

void printArray(const int* a, int size) {
    for (int i = 0; i < size; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    int u[arraySize] = { 0, 8, 10, 2, 4, 5, 2, 9, 5, 15 };
    int* s = new int[arraySize];

    printArray(u, arraySize);

    mysort(u, s);

    printArray(s, arraySize);

    // Alliberar la memòria
    delete[] s;

    return 0;
}
