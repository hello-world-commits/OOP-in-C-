// do while loop q4
#include <iostream>

using namespace std;

int main()
{

   int n,i=1,fact=1;
   cout<<"enter factorial  : ";
   cin>>n;
   do
   {
     fact=fact*i;
     i++;
    
   }
   while(i<=n);
   cout<<fact<<endl;
   
    return 0;
}
