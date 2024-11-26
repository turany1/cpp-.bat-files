
#include <iostream>



using namespace std;
int main()
{	
	float tax3=0.28;
	float tax2=0.21;
	float tax1=0.19;
	int taxRate;

	int hours;
	int forHour;

	int perWeek;
	int perYear;
	int calcTax = 0;

	cout << "How many hour was the employee working " << endl;
	cin >> hours;
	cout << "How many dollars he got for 1 hour " << endl;
	cin >> forHour;
	if ( hours > 40)
	{
		perWeek = forHour * 40 + forHour * 2 * (hours - 40);
		
	}
	else
	{   
		perWeek = forHour * (40 - (40 - hours));
	}
	cout << perWeek << endl;

		int ask = 1;
		
	while (ask != 0)
	{
		cout << "1 - calculate , 0 - end program " << endl;
		cin >> ask;

		switch (ask)
		{
		case 1:
			perYear = 52 * perWeek;

			if (perYear >= 30000)
			{
				calcTax += (perYear - 30000) * tax3;
				calcTax += 10000 * tax2;
				calcTax += 20000 * tax1;
				taxRate = 28;
			}
			else
			{
				if (perYear <= 20000)
				{
					calcTax += (20000 - (20000 - perYear)) * tax1;
					taxRate = 19;
				}
				else
				{
					calcTax += 20000 * tax1;
					calcTax += (10000 - (30000 - perYear)) * tax2;
					taxRate = 21;
				}
			}
			cout << "Annual earnings : " << perYear << endl;
			cout << "Tax rate : " << taxRate << "%"<<endl;
			cout << "Calculated tax : " << calcTax << endl;
			cout << "Earnings after tax : " << perYear - calcTax << endl;


			break;
		case 0:
		
			break;
		}

	}
	return 0;
}


