#include <iostream>

using namespace std;
int main()
{	
	int a;
	int b;
	cout << "Provide the first value" << endl;
	cin>> a;
	cout << "Ptovide the secind value" << endl;
	cin>> b;
	while (a!=b)
	{
		if (a>b)
		{
			a = a - b;
		}
		else
		{
			b = b - a;
		}
	}

	cout <<"Result: " << a << endl;
	return 0;
}

