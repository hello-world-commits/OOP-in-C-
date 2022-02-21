//pointers q3
#include <iostream>
using namespace std;
 void grams(float *x)
{
    *x= *x*1000;
}
int main()
{
    float kg, *grm;
    void grams(float*);
    grm=&kg;
    cout<<"Enter Kilograms : ";
    cin>>kg;
    grams(&kg);
    cout<<"Result in Grams :"<<*grm<<endl;
    return 0;
}
 
