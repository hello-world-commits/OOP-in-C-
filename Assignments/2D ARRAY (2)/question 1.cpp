#include <iostream>
using namespace std;
const int s=10;
void operations(int mat[s][s], int row, int col)
{
    int i, j;
    
    //part 1 input
    cout<<"enter elemets in array :";
    for(i=0;i<row;i++)
    {
		for(j=0;j<col;++j)
		{
		
			cin>>mat[i][j];
		}	
    }  
    
    // part 2 display
    cout<<"the array you entered is :"<<endl;
    for(i=0;i<row;i++)
    {
		for(j=0;j<col;++j)
		{
		
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
    } 
    
    //part 3 sum of elements
    cout<< endl<< "sum of all the elements is :" << endl;
   
   
   {	int sum=0;
    	for(int rows=0;rows<row;rows++){
     		for(int column=0;column<col;column++){
				sum=sum+mat[rows][column];
       		}
       	} cout<< sum << endl;
    }
 //part 4 transpose    
  cout<< endl<< "transpose of the array is :" << endl;
  
  int B[s][s];
    for(int rows=0;rows<row;rows++)
    
  for(int column=0;column<col;column++)
       B[rows][column]=mat[column][rows];
    	for(int rows=0;rows<row;rows++){
		cout<< endl;
    	for(int column=0;column<col;column++){
			 cout << B[rows][column]<<"	";
       		}
       	}
    

 
    int sum = 0;
 //part 5 sum of row
    cout << "\nFinding Sum of each row:\n\n";
 
    
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
 
            
            sum = sum + mat[i][j];
        }
 
        // Print the row sum
        cout
            << "Sum of the row "
            << i << " = " << sum
            << endl;
 
        // Reset the sum
        sum = 0;
    }
//_____________________________________

//part 6 sum of colums
 
 
    cout << "\nFinding Sum of each column:\n\n";
 
    
    for (i = 0; i < row; ++i) {
        for (j = 0; j < col; ++j) {
 
            // Add the element
            sum = sum + mat[j][i];
        }
 
        
        cout
            << "Sum of the column "
            << i << " = " << sum
            << endl;
 
        // Reset the sum
        sum = 0;
    }
    
    
}   
int main()
{
    int mat[s][s];
    int row,col;
    cout<<"enter number of rows :"<<endl;
    cin>>row;
    cout<<"enter number of columns :"<<endl;
    cin>>col;
    
    
      
    
    operations(mat, row, col);
          
    return 0;
}