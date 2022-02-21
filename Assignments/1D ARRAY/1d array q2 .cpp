// 1d array q2
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));

	for (int i = 0; i <= 4; i++)
	{
		int start = 1;
		int end = 100;
		cout << start + rand() % (end - start + 1)<<" ";
	}
}