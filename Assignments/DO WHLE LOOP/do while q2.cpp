// do while loop q2
#include <iostream>

using namespace std;

int main()
{
   int n,i;
   cout<<"enter number : ";
   cin>>n;
   do
   {
       if(i%2==0)
       {
           cout<<i<<" is an even number."<<endl;
       }
       else
        cout<< i <<" is an odd number."<<endl;
    i++;    
   }
   while(i<=n);
   
    return 0;
}


