#include <iostream>
using namespace std;
int main()
{
	int x, y,j,i;
	cout << "Enter first number" << "\t";
	cin >> x;
	cout << "Enter second number" << "\t";
	cin >> y;
	cout << "The prime numbers between the given number is""\t";

	for ( i = x; i <= y; i++)
	{
		for ( j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				//cout << " ";
				break;
			}
		}
			 if(j == i)
			{
				cout << j<<" ";
			}
		
	}

}

