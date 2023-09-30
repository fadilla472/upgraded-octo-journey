#include <iostream>
using namespace std;

int main() {
    int matriks[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "matriks[" << i << "][" << j << "] = " << matriks[i][j] << endl;
        }
    }

    return 0;
}

