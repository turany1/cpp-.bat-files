#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main(int argc, char** argv)
{
	int menu,menu1,menu2,menu3;
	
	float S1,P1,S2,P2,S3,P3;
	int a,b,c,h,r;
	float pi = 3.14;
	
	while (menu<4)
	{
	
		cout << "Select a figure:"<<endl<<"1 - circle , 2 - triangle , 3 - square. "<<endl<<"IF YOU WANT TO CLOSE THE PROGRAM - ENTER 4"<<endl;
		cin >> menu;
		switch(menu)
		{
			case 1:
				
				cout << "Select what do you want to calculate:"<<endl<<"1 - the area of the circle , 2 - the perimetr of the circle "<<endl;
				cin >> menu1;
				switch(menu1)
					{
						case 1:
							
							cout<<endl<<"Provide the radius"<<endl;
							cin >> r;
							S1 = pi*r*r;
							cout<<S1<<endl;
							
							break;
						case 2:
							
							cout<<endl<<"Provide the radius"<<endl;
							cin >> r;
							P1 = 2*pi*r;
							cout<<P1<<endl;
							
							break;	
					}
				break;
	
			case 2:
				
					cout << "Select what do you want to calculate:"<<endl<<"1 - the area of the triangle , 2 - the perimetr of the triangle "<<endl;
					cin >> menu2;
					switch(menu2)
					{
					
						case 1:
							cout<<endl<<"Provide the side "<<endl;
							cin >> a;
							cout<<endl<<"Provide the height "<<endl;
							cin >> h;
							S2 = a*h*0.5;
							cout << S2<<endl;
							
							break;
						case 2:
							cout<<endl<<"Provide the first side "<<endl;
							cin >> a;
							cout<<endl<<"Provide the second side "<<endl;
							cin >> b;
							cout<<endl<<"Provide the third side "<<endl;
							cin >> c;
							P2 = a+b+c;
							cout << P2<<endl;
							
							break;
					}
				
				break;
				
			case 3:
	 					
					cout << "Select what do you want to calculate:"<<endl<<"1 - the area of the square , 2 - the perimetr of the square "<<endl;
					cin >> menu3;
					switch(menu3)
					{
					
						case 1:
							cout<<endl<<"Provide the side "<<endl;
							cin >> a;
							S3 = a*a;
							cout << S3<<endl;
							
							break;
						case 2:
							cout<<endl<<"Provide the side "<<endl;
							cin >> a;
							P3 = 4*a;
							cout << P3<<endl;
							
							break;
						
					}
				break;		
						
		}
	}
return 0;			
}



	

