#include <iostream>

using namespace std;
int main()
{
	int buff;
	int key;
	cout << "Write your key" << endl;
	cin >> key;
 
    int array[] = {28 ,20 ,8 ,10 ,1 ,11 ,8 ,5 ,9};
	buff = key;
	cout << "First part" << endl;
	for (int i = 0; i <9 ;i++)
	{
		if (buff==array[i])
		{
			cout << key << " Is under index " << i << endl;
			i = 9;
		}
	}
	buff = key;
	system("pause");
	cout << "Second part" << endl;
	for (int i = 0; i < 9; i++)
	{
		if (buff == array[i])
		{
			cout << key << " Is under index " << i << endl;
		}
	}


    return 0;
}


