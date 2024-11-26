#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;

int main(int argc, char** argv)
{
	int menu=0;
	char abc[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'} ;
	int lg,key1,key2,rg;
	int j;
	string word;	
	while (menu<4)
	{
		cout<<"Print your word."<<endl;
		cin>>word;
		cout<<endl<<"How many letters are in your word?"<<endl;
		cin>>lg;
		string pass[lg];
		cout << "Select an option:"<<endl<<"1 - Code , 2 - DeCode , 3 - Brute Force. "<<endl<<"IF YOU WANT TO CLOSE THE PROGRAM - ENTER 4"<<endl;
		cin >> menu;
		switch(menu)
		{
			case 1:
				cout<<"Provide a key for Coding."<<endl;
				cin>>key1;
				key2=key1;
				for(int i = 0;i<lg;i++)
				{
					j=-1;
					do {
	 						j++;	
						}while(word[i]!=abc[j]);
						
						if(j+key1<26)
						{
							word[i]=abc[j+key1];
						}
						else
						{
							while(j+key2>26)
							{
								key2=key2-26;
								cout<<key2<<endl;
							}
							word[i]=abc[j+key2];
						}
						cout<<word<<endl;
				}	
				break;
	
			case 2:
				cout<<"Provide a key for DeCoding."<<endl;
				cin>>key1;
				key2=key1;
				for(int i = 0;i<lg;i++)
				{
					j=-1;
					do {
	 						j++;	
						}while(word[i]!=abc[j]);
						
						if(j-key1>-1)
						{
							word[i]=abc[j-key1];
						}
						else
						{
							while(j-key2<0)
							{
								key2=key2-26;
								cout<<key2<<endl;
							}
							word[i]=abc[j-key2];
						}
						cout<<word<<endl;
				}
				break;
				
			case 3:
				cout<<"Provide a Range."<<endl;
				cin>>rg;
				string pass=word;
	 			int key=0;
	 			key1=0;
	 			for(int x=0;x<rg;x++)
				{
						key2=key1;
						for(int i = 0;i<lg;i++)
						{
							j=-1;
							do {
	 								j++;	
								}while(word[i]!=abc[j]);
						
								if(j-key1>-1)
								{
									word[i]=abc[j-key1];
								}
								else
								{
									while(j-key2<0)
									{
										key2=key2-26;
									}
									word[i]=abc[j-key2];
								}
						}
						key1++;
						cout<<word<<endl;
						word=pass;
				
				}
		
			break;						
		}
	}
	return 0;
	}
