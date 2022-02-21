// OPERATORS
// question 2 

#include <iostream>
using namespace std;

const double dollar_value=165;
int main()
{
     double dollar;
     double rupee;
     cout<<"Enter the value of rupee :";
   
     cin>>rupee;
     dollar=dollar_value/rupee;
    cout<<"the value of rupee "<<rupee<<" to dollar is : $"<<dollar;

    return 0;
}
