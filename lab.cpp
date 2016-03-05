#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number :" << endl;
	cin >> n;
	while(n != 1)
	{
		cout << n << endl;

		if(n % 2 != 0)
			n = 3 * n + 1;
		else if(n % 2 == 0)
			n = n / 2;
	}
	cout << 1 << endl;

	return 0;
}
