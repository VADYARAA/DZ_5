#include "num3.h"

void full3(int** mas, int n, int k) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < k; j++)
        {
            mas[i][j] = rand() % 41 + 10;
        }
}

void print3(int** mas, int n, int k) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++)
        {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
}