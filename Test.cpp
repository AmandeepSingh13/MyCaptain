#include<iostream>
using namespace std;
main()
{
	int a;
	char b;
	float c,Num1,Num2,Product;
	double d;
	cout<<"Size of int: "<<sizeof(a)<<" bytes\n"<<"Size of char: "<<sizeof(b)<<" byte\n"<<"Size of float: "<<sizeof(c)<<" bytes\n"<<"Size of double:"<<sizeof(d)<<" bytes\n";
	cout<<"Enter Two Numbers to Multiply "<<endl;
	cin>>Num1>>Num2;
	Product=Num1*Num2;
	cout<<"Product of "<<Num1<<" and "<<Num2<<" is "<<Product;
}

