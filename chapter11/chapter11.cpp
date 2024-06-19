#include <iostream>
using namespace std;

int main()
{
	cout << "Enter the number : ";
	int number;
	cin >> number;

	if (number >= 0 && number <= 10)
	{
		cout << "\n\n*" << endl;
	}
	else
	{
		cout << "\n\n#" << endl;
	}

	return 0;
}