#include <iostream>

using namespace std;

int main() {

    int R1, col1, R2, col2, i, j, k;


    int m1[10][10], m2[10][10], pro[10][10];

    cout << "enter rows of matrix A : ";
    cin >> R1;
    cout<<"enter columns of matrix A ";
     cin>> col1;
    cout << "enter rows of matrix B : ";
    cin >> R2;
    cout<<"enter columns of matrix B ";
     cin>> col2;

    if (col1 == R2) {
        cout << "\nEnter the " << R1 * col1 << " elements of first matrix : ";

        for (i = 0; i < R1; i++) {
            for (j = 0; j < col1; j++) {
                cin >> m1[i][j];
            }
        }

        cout << "\nEnter the " << R2 * col2 << " elements of second matrix : \n";

        for (i = 0; i < R2; i++) {
            for (j = 0; j < col2; j++) {
                cin >> m2[i][j];
            }
        }


        for (i = 0; i < R1; i++) {
            for (j = 0; j < col2; j++) {
                pro[i][j] = 0;

                for (k = 0; k < col1; k++)
                    pro[i][j] = pro[i][j] + (m1[i][k] * m2[k][j]);
            }
        }

        cout << "\n\nThe first matrix is : \n";

        for (i = 0; i < R1; i++) {
            for (j = 0; j < col1; j++) {
                cout << m1[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "\n\nThe second matrix is : \n";

        for (i = 0; i < R2; i++) {
            for (j = 0; j < col2; j++) {
                cout << m2[i][j] << "  ";
            }
            cout << endl;
        }

        cout << "\n\nTHE RUSULTANT PRODUCT MATRIX IS  : \n";

        for (i = 0; i < R1; i++) {
            for (j = 0; j < col2; j++) {
                cout << pro[i][j] << "  ";
            }
            cout << endl;
        }

    } else {
        cout << "\n\n for matrix multiplication no of rows of A must be equal to number of rows of B  !";
    }

    cout <<endl;

    return 0;
}

