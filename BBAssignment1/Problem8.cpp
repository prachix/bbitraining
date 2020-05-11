/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


    
#include<iostream>
using namespace std;

int main()
{  
	int i,j,c;
	cout<<"Enter Largest Alphabet Value(e.g C=3):";
	cin>>c;
	for(i=0;i<c;i++)
	{
		for(j=65;j<64+(2*c);j++)
		{ 
			if(j>=(64+c)+i)
				cout<<(char)((64+c)-(j%(64+c)));
			else if(j<=(64+c)-i)
				cout<<(char)j;
			else
				cout<<"_";
		}
		cout<<endl;
	}

	return 0;
}