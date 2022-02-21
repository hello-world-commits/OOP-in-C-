#include <iostream>
using namespace std;

int main()
{
    int row, col, arr1[50][50], arr2[50][100], sum[50][50];
    int i,j;

    cout << "Enter number of rows: ";
    cin >> row;

    cout << "Enter number of columns : ";
    cin >> col;
    

    cout << endl << "enter elements for array 1: " << endl;  
    for(i = 0; i < row; ++i)
       for(j = 0; j < col; ++j)
       {
           
           cin >> arr1[i][j];
       }

    
    cout << endl << "enter elements for array 2 :" << endl; 
    for(i = 0; i < row; ++i)
    for(j = 0; j < col; ++j)
       {
           
           cin >> arr2[i][j];
       }

    
    for(i = 0; i < row; ++i)
    for(j = 0; j < col; ++j)
        sum[i][j] = arr1[i][j] + arr2[i][j];

    cout<< "the sum of two matrices is..... : " << endl;
    for(i = 0; i < row; ++i)
    for(j = 0; j < col; ++j)
        {
            cout << sum[i][j] << "  ";
            if(j == col - 1)
                cout << endl;
        }

    return 0;
}
