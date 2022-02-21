
#include<iostream>

using namespace std;

const int s=10;

void upper_half(int arr[s][s], int row, int col)
{
    int i, j;
    cout<<"enter elemets";
    for(i=0;i<row;i++)
    {
		for(j=0;j<col;++j)
		{

			cin>>arr[i][j];
		}
    }
    cout<<"....the upper half is...."<<endl;
    cout<<endl;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i > j)
            {
                cout << " " << " ";
            }
            else
            cout << arr[i][j] << " ";
        }
        cout << endl;

    }

}


int main()
{
    int arr[s][s];
    int row,col;
    cout<<"enter number of rows :"<<endl;
    cin>>row;
    cout<<"enter number of columns :"<<endl;
    cin>>col;




    upper_half(arr, row, col);

    return 0;
}
