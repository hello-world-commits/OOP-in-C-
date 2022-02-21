//switch q2
#include <iostream>
using namespace std;

int main() 
{
	char n;
   	cout<<"Month No (just first alphabet) : ";
   	cout<<" january=J\nfebrurar=f\nmarch=m\napril=A\nmay=m\njune=j\njuly=x\naugust=a\nseptember=s\noctober=o\nnovember=n\ndecember=d ";
   	cin >> n;
   	switch(n)
   	{
		case 'J':
      			cout <<"1";
      			break;
		case 'f':
      			cout <<"2";
      			break;
		case 'M':
      			cout <<"3";
      			break;
		case 'A':
     			cout <<"4";
      			break;
		case 'm':
      			cout <<"5";
      			break;
		case 'x':
      			cout <<"6";
      			break;
		case 'j':
      			cout <<"7";
      			break;
		case 'a':
      			cout <<"8";
      			break;
		case 's':
      			cout <<"9";
      			break;
		case 'o':
      			cout <<"10";
      			break;
		case 'n':
      			cout <<"11";
      			break;
		case 'd':
      			cout <<"12";
      			break;
		default:
      			cout <<"Invalid Month number\nPlease try again ....\n";
      			break;
    	}
        return 0;
}