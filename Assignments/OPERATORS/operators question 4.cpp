// OPERATORS
// question 4

#include <iostream>
using namespace std;

const double total_marks=100;
int main()
{
     string name;
     double marks;
     double percentage;
cout<<"enter student name : ";
     cin>>name;
cout<<"enter 2nd semester score : ";     
     cin>>marks;
cout<<"\n_____________D M C _______________"<<endl; 
cout<<"NAME : "<<name<<endl;
cout<<"SEMESTER : 2 "<<endl;

cout<<"OBTAINED MARKS : "<<marks<<" OUT OF "<<total_marks<<endl; 

     percentage=marks/total_marks*100;
     
cout<<"PERCENTAGE : "<<percentage<<"%";     
     
   
    return 0;
}
