#include<iostream>

using namespace std;

int rsum()
{
	int a[5][5],d1sum=0,d2sum=0,m,i,j;
	cout<<"RIGHT DIAGONALS"<<endl;
	cout<<"Enter size of the square matrix(max 5):";
	cin>>m;
	cout<<"\nEnter the Matrix elements :\n";

	for(i=0;i<m;i++)
		for(j=0;j<m;++j)
			cin>>a[i][j];

	for(i=0;i<m;i++)
	{
		for(j=0;j<m;++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;

	}
	for(i=0;i<m;++i)
		for(j=0;j<m;++j)
		{
			if(i==j)
				d1sum+=a[i][j];

		}

	cout<<"\nSum of right diagonal is "<<d1sum;

	return 0;
}


int lsum()
{
	int a[5][5],d1sum=0,d2sum=0,m,i,j;
	cout<<"LEFT DIAGONALS"<<endl;
	cout<<"Enter size of the square matrix(max 5):";
	cin>>m;
	cout<<"\nEnter the Matrix elements :\n";

	for(i=0;i<m;i++)
		for(j=0;j<m;++j)
			cin>>a[i][j];

	for(i=0;i<m;i++)
	{
		for(j=0;j<m;++j)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;

	}
	for(i=0;i<m;++i)
		for(j=0;j<m;++j)
		{

			if(i+j==(m-1))
				d2sum+=a[i][j];
		}


	cout<<"\nSum of left diagonal is "<<d2sum;

	return 0;
}


int main()
{
   char a;
   cout<<"welcome to diagonal sum programme"<<endl;
   cout<<"Press R for right diagonal , L for left"<<endl;
   cin>>a;
   if(a=='r' || a=='R')
   {
      rsum();
   }
   else if(a=='l' || a=='L')
   {
       lsum();
   }



    return 0;
}



