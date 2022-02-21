// OPERATORS
// question 3 

#include <iostream>
using namespace std;


int main()
{
     double centigrade;
     double fahrenheit;
     cout<<"Enter the value of centigrade :";
   
     cin>>centigrade;
     fahrenheit=(centigrade * 9/5) + 32;
    cout<<"the value of "<<centigrade<<"°C to fahrenheit is "
    <<fahrenheit<<"F";

    return 0;
}
