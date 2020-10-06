#include<iostream>
using namespace std;
main()
{
	int Age;
	char Name[30];
	cout<<"Enter Your Name: ";
	gets(Name);
	cout<<"Enter Your Age: ";
	cin>>Age;
	if(Age>=18)
	{
		cout<<"\nWell Well! "<<Name<<"\nYou can vote!!!!!\n";
	}
	else
	{
		cout<<"Sorry "<<Name<<".You are not Eligible to Vote";
	}


}
