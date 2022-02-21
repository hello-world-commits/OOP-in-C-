// OPERATORS
// question 5

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    float num1;
    float num2;
cout<<"enter first number: ";
cin>>num1;
cout<<"enter second number: ";
cin>>num2;
cout<<"___________MAX/MIN___________"<<endl;

cout<<"THE MAXIMUM VALUE BETWEEN NUM1 AND NUM 2 IS : "
    <<max(num1,num2)<<endl;
cout<<"THE MINIMUM VALUE BETWEEN NUM1 AND NUM 2 IS : "
    <<min(num1,num2)<<endl; 
    
cout<<"___________SUARE ROOT___________"<<endl;    
cout<<"SQUARE ROOT OF NUM1 : "
    <<sqrt(num1)<<endl;
cout<<"SQUARE ROOT OF NUM2 : "
    <<sqrt(num2)<<endl; 

cout<<"_________OTHER FUNCTIONS___________"<<endl;
float x,y,z;
cout<<"enter value for x: ";
cin>>x;
cout<<"enter value for y :";
cin>>y;
cout<<"enter value for z :";
cin>>z;
cout<< "absolute value of x:"<<abs(x)<<endl;
cout<<"arccosine of x: "<<acos(x)<<endl;
cout <<"arcsine of x: "<<asin(x)<<endl;
cout <<"arctangent of x: "<<atan(x)<<endl;
cout <<"cube root of x: "<<cbrt(x)<<endl;
cout <<"value of x rounded up to its nearest integer: "<<ceil(x)<<endl;
cout <<"cosine of x: "<<cos(x) <<endl;
cout<< "Returns the hyperbolic cosine of x: "<<cosh(x)<<endl;
cout<< "Returns the value of Ex "<<exp(x)<<endl;
cout <<"Returns ex "<<expm1(x)<<endl;

cout<<"absolute value of a floating x "<<fabs(x) <<endl;
cout <<"value of x rounded down to its nearest intege r :" 
     <<floor(x) <<endl;
     
cout<<"x*y+z without losing precision "<<fma(x, y, z)<<endl;
cout<< "the highest value of a floating  x and y"<<fmax(x, y)<<endl; 
cout<<"the lowest value of a floating x and y" <<fmin(x, y) <<endl;
cout<< "the floating point remainder of x/y "<<fmod(x, y)<<endl;
cout<<"the value of x to the power of y "<<pow(x, y) <<endl;

cout<<"the sine of x (x is in radians) "<<sin(x) <<endl; 
cout <<"the hyperbolic sine of a double value "<<sinh(x)<<endl; 
cout <<"the tangent of an angle "<<tan(x)<<endl; 
cout <<"the hyperbolic tangent of a double value "<<tanh(x)<<endl; 
    
    
return 0;
}
