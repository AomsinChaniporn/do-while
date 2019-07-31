#include<iostream>
#include<string>
using namespace std;
int main() 
{
	char Ch;
	cout << "program Calculate Area" << endl;
	cout << "1. Circle" << endl;
	cout << "2. Square" << endl;
	cout << "3. Triangle" << endl;
	cout << "4. Exit" << endl;
	int r=0;
	int s=0;
	int h=0;
	int b=0;
	do
	{
		cout << "Enter your choose number : ";
		cin >> Ch;
		if (Ch == '1')
		{
			cout << "Enter Radius : ";
			cin >> r;
			cout << "Area of Circle is " << 3.14*r*r << endl;
		}
		else if(Ch == '2')
		{
			cout << "Enter Side : ";
			cin >> s;
			cout << "Area of Square is " << s*s << endl;
		}
		else if (Ch == '3')
		{
			cout << "Enter high : ";
			cin >> h;
			cout << "Enter base : ";
			cin >> b;
			cout << "Area of Triangle is " << 0.5*b*h << endl;
		}
	}
	while(Ch != '4');
}