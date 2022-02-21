// if else 

//question 3

#include <iostream>
using namespace std;

int main()
{
     float percentage;
     char grade;
     cout<<"ENTER YOUR PERCENTAGE : ";
     cin>>percentage;
     if(percentage<=40)
     {
        grade='F' ;
       cout<<"YOU HAVE GOT A "<<grade<<" garde"; 
     }
    else if (percentage>=40 && percentage<=50)
    {
        grade='D' ;
       cout<<"YOU HAVE GOT A "<<grade<<" garde"; 
    }
    
    else if (percentage>=50 && percentage<=50)
    {
        grade='C' ;
       cout<<"YOU HAVE GOT A "<<grade<<" garde"; 
    }
    else if (percentage>=60 && percentage<=70)
    {
       grade='B' ;
       cout<<"YOU HAVE GOT A "<<grade<<" garde"; 
    }
    else if (percentage>=70 && percentage<=80)
    {
       grade='B' ;
       cout<<"YOU HAVE GOT A "<<grade<<"+ garde"; 
    }
    else if (percentage>=80 && percentage<=90)
    {
       grade='A' ;
       cout<<"YOU HAVE GOT AN "<<grade<<" garde"; 
    }
    else if (percentage>=90 && percentage<=100)
    {
       grade='A' ;
       cout<<"YOU HAVE GOT AN "<<grade<<"+ garde"; 
    }
    else
    {
        cout<<"enter correct value !!";
    }
    
    return 0;
}
