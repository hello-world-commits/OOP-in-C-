//if else if else q 4

#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    char ope ;
    cout<<"enter a value" << endl;
    cin >> a;
    cout<<"enter b value" <<endl;
    cin >> b;
    cout<<"enter operation (+ - * / and %)";
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
    else{
    cout<<"entered wrong input";
    }
    return 0;
}