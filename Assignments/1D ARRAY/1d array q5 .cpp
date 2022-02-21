// 1D ARRAY QUESTION 5 
#include <iostream>
using namespace std;

int main()
{
    int A[]={2,3,4,5,6,8};
    int min=A[0];
  for(int var: A)
  {
    if(var<min)
    {
    min=var;
    }
  }
cout<<"The maximum value is :"<<min;  
  
 return 0;
}
    
    
    
