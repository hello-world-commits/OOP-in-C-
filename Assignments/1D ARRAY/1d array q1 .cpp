// 1D ARRAY QUESTION 1 
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"enter array sizes:"<<endl;
    cin>>size;
    int A[size],B[size],C[size];
    cout<<"enter values for array 1"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    cout<<"enter values for array 2"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>B[i];
    }
    cout<<"The sum of array 1 and array 2 is. \n";
    for(int i=0;i<size+1;i++)
    {
        C[i]=A[i]+B[i];
        cout<<C[i];
        cout<<" ";
    }
    
 return 0;
}
    
    
    
