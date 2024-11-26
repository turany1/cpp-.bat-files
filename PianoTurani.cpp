#include <conio.h>
#include <windows.h>
#include <iostream>

int main()
{
	int lenght = 300;
	while (true)
	{
		char note = _getch();

		switch (note) 
		{
			case 'a':
				Beep(392 ,lenght);
				break;
			case 'w':
				Beep(415, lenght);
				break;
			case 's':
				Beep(440, lenght);
				break;
			case 'e':
				Beep(466, lenght);
				break;
			case 'd':
				Beep(493, lenght);
				break;
			case 'f':
				Beep(523, lenght);
				break;
			case 't':
				Beep(554, lenght);
				break;
			case 'g':
				Beep(587, lenght);
				break;
			case 'y':
				Beep(622, lenght);
				break;
			case 'h':
				Beep(650, lenght);
				break;
			case 'u':
				Beep(698, lenght);
				break;
			case 'j':
				Beep(700, lenght);
				break;
			case 'k':
				Beep(784, lenght);
				break;
		}




	}

	return 0;
}


