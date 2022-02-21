// do while q5
#include <iostream>
using namespace std;

int main()
{
    int a,b,c;
    char ope;
    char choice='y';
    do
    {
   
        cout<<"enter a value : ";
    cin >> a;
    cout<<"enter b value : ";
    cin >> b;
    cout<<"enter operation (+ - * / and %) : ";
    cin>> ope;
    if (ope == '+')
    {
        c=a+b;
        cout<< c;
    
    }
    if (ope == '-')
     {
        c=a-b;
        cout<< c;
    
     }
      else if (ope == '*')
      {
          c=a*b;
      cout<< c;
     
      }
      else if (ope == '/')
      {
       c= a/b;
       cout<< c;
   
      }
      else if (ope == '%')
      {
        c=a%b;
        cout<< c;
      }
        
        
        cout<<"\nwhould you like to continue(y/n): ";
        cin>>choice;
    } while(choice=='y')   ;
    return 0;
}
    
    
    
