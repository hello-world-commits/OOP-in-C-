// nested loop q2  
#include <iostream>
using namespace std;

int main()
{
    
    for(int i=0 ; i<5 ;i++)
    {
        int couter=0;
        for(int j=0 ; j<5 ; j++)
        {
            if(i<=j)
            {
                couter=couter+1;
                cout<<couter<<" ";
            }
            
        }
       cout<<endl; 
    }
 return 0;
}
    
    
    
