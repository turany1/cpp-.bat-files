#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
int main(int argc, char** argv)
{																																																																																																																											

    cout << "Provide as many values as you wish"<<endl;
    int i;
    int all[100];
    int d;
	for(;d>=0;i++)
	{
		
		cin >> d;
		all[i] = d;
				
	}	
	cout<<"Your numbers are:";
	for(int n=0;n <i-1;n++)
	{
		
	cout << all[n]<<" " ;	

	}
	
	int l=0;
	int m=0;
	int h=0;
	
	
	int low[100];
	int mid[100];
	int high[100];
	for(int q=0;q<i-1;q++)
	{
		if(all[q]<100)
		{
			low[l]=all[q];
			l++;
		}
		else
		{
			if(999<all[q])
		    {
		    	high[h]=all[q];
				h++;
			}
			else
			{
				mid[m]=all[q];
				m++	;
			}
		
			
		}
		
	}
	cout<<endl;
	cout<<"Your numbers from 1 to 99 are:";
	for(int n=0;n<l;n++)
	{
		
	cout << low[n]<<" " ;
	}
	cout<<endl;
	
	cout<<"Your numbers from 100 to 999 are:";
	for(int n=0;n<m;n++)
	{
		
	cout << mid[n]<<" " ;
	}
	cout<<endl;
	
	cout<<"Your numbers from 1000 to ... are:";
	for(int n=0;n<h;n++)
	{
		
	cout << high[n]<<" " ;
	}
	cout<<endl;
		
		
		
		

		
		
		
		
	return 0;
}
