// for loop q2
#include <iostream>

using namespace std;

int main()
{
   int n;
   cout<<"enter number : ";
   cin>>n;
   for(int i = 0 ; i<=n ;i++)
   {
       if(i%2==0)
       {
           cout<<i<<" is an even number."<<endl;
       }
       else
        cout<< i <<" is an odd number."<<endl;
   }
   
    return 0;
}
