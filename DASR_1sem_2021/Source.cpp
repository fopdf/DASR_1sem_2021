#include <iostream>
#include <vector>
#include <boost/align.hpp>

using namespace std;

int multi(int a, int b)
{
	return a * b;
};



int main()
{
	cout << "Hello World!\n";
	int a = 1;
	int b = 2;
	cout << a + b << ' ';

	//add smth
	int c = 3;
	cout << a + b + c << ' ';
	//Index editor 
	int d = 0;
	d = multi(a, b);
	cout << d << ' ';
	//add changes on github.com
	int e[15];
	for(int i = 0; i < 15; i++)
	{
		e[i] = i;
		cout << e[i] << ' ';
	}
//<<<<<<< HEAD
	//add changes in branch
	for (int i = 0; i < 15; i++)
	{
		cout << e[i] * b << ' ';
	}
//=======
	//add change in master
	for (int i = 0; i < 15; i++)
	{
		cout << e[i] * b * b << ' ';
//>>>>>>> master
	}
	//add some more commit
	double f = 2.71;
	cout << f * b << ' ';
}

