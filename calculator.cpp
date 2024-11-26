#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 using namespace std;
 //INPUTS
 int v1,v2;
 //OUTPUTS
 int v3;
 float v4;
 //FUNCTIONS
 int pluss(int a, int b);
 int minuss(int a,int b);
 float byy(float a,float b);
 float overr(float a,float b);
 int fact(int a);
 int fibc(int a);
 
 /*MAIN FUNC*/
int main(int argc, char** argv)
{	
int menu=0;
while (menu<7)
	{
		cout<<"Provide two values"<<endl;
		cin>>v1;
		cin>>v2;
		cout << "Select an option:"<<endl<<"1 - ADDITION , 2 - SUBTRACTION , 3 - MULTIPLICATION , 4 - DIVISION , 5 - FACTORIAL , 6 - FIBONACI SEQ."<<endl<<"IF YOU WANT TO CLOSE THE PROGRAM - ENTER 7."<<endl;
		cin >> menu;
		switch(menu)
		{
			case 1:
				v3=pluss(v1, v2);
				cout<<v1<<" + "<<v2<<" = "<<v3<<endl;
			break;
	
			case 2:
				v3=minuss(v1,v2);
				cout<<v1<<" - "<<v2<<" = "<<v3<<endl;	
			break;
				
			case 3:
				v4=byy(v1,v2);
				cout<<v1<<" * "<<v2<<" = "<<v4<<endl;
			break;
			
			case 4:
				v4=overr(v1,v2);
				cout<<v1<<" / "<<v2<<" = "<<v4<<endl;
			break;
			
			case 5:
				v3=fact(v1);
				cout<<"Factorial of "<<v1<<" = "<<v3<<endl;
			break;
			
			case 6:
				v3=fibc(v1);
				cout<<"The Fibonaci Seq of "<<v1<<" = "<<v3<<endl;
			break;
		}
	}
	return 0;
}
	int pluss(int a, int b)
 	{ return a+b; }
 	
 	int minuss(int a,int b)
 	{ return a-b; }
 	
 	float byy(float a,float b)
 	{ return a*b; }
 	
 	float overr(float a,float b)
 	{ return a/b;}
 	
 	int fact(int a)
	{
			if(a<=1)
		{
			return 1;
		}
		else
		{
			return fact(a-1)*a;
		}	
	}
	
	int fibc(int a)
	{
		if(a<=1)
		{
			return a;
		}
		else
		{
			return fibc(a-1)+fibc(a-2);
		}	
	}

	/*	int fac=1;
	 	for(int i=1;i<=a;i++)
	 	{
	 		fac=fac*i;
		}
	 	return fac;*/
