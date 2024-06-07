#include <iostream>
using namespace std;

void transpose(int mat[3][3], int trans[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            trans[j][i] = mat[i][j]; 
        }
    }
}

int main() {
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int trans[3][3];
    transpose(mat, trans);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << trans[i][j] << " "; 
        }
        cout << endl;
    }
    return 0;
}
