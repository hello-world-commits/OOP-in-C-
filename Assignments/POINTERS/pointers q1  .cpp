// pointers q1
#include <iostream>
using namespace std;
int main()
{
    int array[50], *max, *min, size, i; 
    cout<<"Enter the number of elements in array\n";
    cin>>size;
    cout<<"Enter array elements\n";
    for ( i = 0 ; i < size ; i++ )
    {
    cin>>array[i];
    }
    max = array; 
    min = array; 
    for (i = 0; i < size; i++)
    {
    
    if (*(array+i) > *max)
        *max = *(array+i);
    }
    cout<<"Maximum element in the array is "<< *max << "\n" ;
    for (i = 0; i < size; i++)
    {
    //check if the value stored at array+i is lesser than value stored at min
    if (*(array+i) < *min)
        *min = *(array+i);
    }
    cout<<"Minimum element in the array is"<< *min <<"\n";
    return 0;
}