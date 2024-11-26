#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


using namespace std;
int main(int argc, char** argv)
 {
 	
 	char alphabet[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'} ;
 	cout<<""<<endl;
 	char i;
 	cin >> i;
 	cout <<endl<<i<<endl;
 	for(int j=0;j<26;j++)
	 {
	 
 	
 	if (i==alphabet[j])
		{
			cout <<endl<<"The sequence number of this letter in the alphabet is :"<<j+1;
			
			
		}
		
	}
 	
	return 0;
}
