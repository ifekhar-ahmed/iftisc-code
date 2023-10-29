#include <iostream>
 using namespace std;
 int main()

{


  int  FindInMatrix(int matrix[3][3]) {
    int max = matrix[0][0];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }

    return max;
}

int main() {
    int matrix[3][3];


    cout << "enter the elements of the 3x3 matrix:" <<endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    int max =  FindInMatrix(matrix);

    cout << "maximum value in the matrix" << max <<endl;

    return 0;
}
}
