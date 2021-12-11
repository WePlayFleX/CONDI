#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 80; i++)
	{
		char ch = (i % 8) ? ' ' : 'x';
		cout << ch;
	}

	system("pause");
	return 0;
}