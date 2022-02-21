// 1d array q3
#include <iostream>
using namespace std;
int main()
{
   int sz;
   cout<<"Enter the size of array::";
   cin>>sz;
   int randArray1[sz];
   int randArray2[sz];
   int sum[sz];
//cout<<"1st array is" <<endl ;   
   for(int i=0;i<sz;i++)
      randArray1[i]=rand()%100;  //Generate number between 0 to 99
  
   cout<<"\nElements of the array 1 "<<endl;
  
   for(int i=0;i<sz;i++)
      cout<<"Elements no "<<i+1<<"::"<<randArray1[i]<<endl;
//cout<<"2nd array is" <<endl ;     
    for(int i=0;i<sz;i++)
      randArray2[i]=rand()%100;  //Generate number between 0 to 99
  
   cout<<"\nElements of the array 2 "<<endl;
  
   for(int i=0;i<sz;i++)
   {
      cout<<"Elements no "<<i+1<<"::"<<randArray2[i]<<endl;  
   }
    
   for (int i = 0; i < sz; i++) 
   {
    sum[i] = randArray1[i] + randArray2[i];
    cout <<"\nsum of "<<i+1<<" elements is "<< sum[i] << endl;
  }
}