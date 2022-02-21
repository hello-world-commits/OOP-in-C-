#include<iostream>
using namespace std;

const int s=10;
void mid(int arr[s][s], int size )
{  

 
 
  for(int i=0;i<size;i++)   
  {
  for(int j=0;j<size;j++)
   {
    cout<<"Enter the "<< i+1<<j+1 <<" value of Matrix : ";
    cin>>arr[i][j];
   }
  }
  
  for(int i=0;i<size;i++)   
  {
  for(int j=0;j<size;j++)
   {
    
    cout<<arr[i][j]<<" ";
   }
   cout<<endl;
  }
  
  cout<<endl;
  cout<<endl;

  cout<<"the Middle Row is: ";  
  for (int i=0;i<size;i++)
  {
   for(int j=0;j<size;j++)
    {
    if (i== size/2)
    cout<<arr[i][j]<<"\t";
    }
  
  
  } 
  cout<<endl;
  cout<<endl;
  cout<<"the Middle Column is: ";    
   for (int i=0;i<size;i++)
      {
         for(int j=0;j<size;j++)
    {
    if(j==size/2)
       cout<<arr[i][j]<<"\t";
       }
  }

}

int main()
{

    int arr[s][s];
    int size;
    cout<<"enter size for a square matrix :"<<endl;
    cin>>size;
    
    
      
    
    mid(arr, size);
}