// OPERATORS
// question 1 

#include <iostream>
using namespace std;

const double dollar_value=165;
int main()
{
     double dollar;
     double rupee;
     cout<<"Enter the value of dollar :";
   
     cin>>dollar;
     rupee=dollar*dollar_value;
    cout<<"the value of $"<<dollar<<" to rupee is :"<<rupee;

    return 0;
}
