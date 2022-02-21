// 1D ARRAY QUESTION 4 
#include <iostream>
using namespace std;

int main()
{
    int A[]={2,3,22,5,6,8};
    int max=A[0];
  for(int var: A)
  {
    if(var>max)
    {
    max=var;
    }
  }
cout<<"The maximum value is : "<<max;  
  
 return 0;
}
    
    
    
