// if else 

//question 2

#include <iostream>
using namespace std;

int main()
{
     float temp;
     cout<<"what temperature is it ? ";
     cin>>temp;
     if(temp<0)
     {
       cout<<"wheather status : "<<"Its freezing out  there"; 
     }
    else if (temp>0 && temp<25)
    {
         cout<<"wheather status : "<<"its between freezing and room temperature";
    }
    
    else if (temp>25)
    {
         cout<<"wheather status : "<<" its hot out there";
    }
    else
    {
        cout<<"wheather status : "<<"its room temperature";
        
    }
    return 0;
}
