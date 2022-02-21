//pointers q2
#include <iostream>
using namespace std;
void fc(float *x)
{
    *x= (*x-32)*5.0/9.0;
} 
 
int main()
{
    float f, *c;
    void fc(float*);
    c=&f;
    cout<<"Enter temperature in Fahrenheit :";
    cin>>f;
    fc(&f);
    cout<<"temperature in Celsius :"<<*c<<endl;
    
 
    return 0;
}
 
