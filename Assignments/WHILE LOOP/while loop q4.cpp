// while loop q4
#include <iostream>

using namespace std;

int main()
{

   int n,i=1,fact=1;
   cout<<"enter factorial  : ";
   cin>>n;
   while(i<=n)
   {
     fact=fact*i;
     i++;
    
   }
   cout<<fact<<endl;
   
    return 0;
}
