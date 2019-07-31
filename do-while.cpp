#include<iostream>
#include<string>
using namespace std;
int main()
{
	string Str;
	int lower = 0;
	cout << "Enter string : ";
	getline(cin,Str,'\n');
	cout << endl;
	cout << "Your string enter(10 char) : " << Str << endl;
	cout << "Lenght of string = " << Str.length() << endl;
	if(Str.length() <=10)
	{

		for (int n = 0 ; n < Str.length() ; n++)
			{
				cout << Str.at(n) << "-" ;
				if(Str.at(n) >= 'a' && Str.at(n) >= 'z')lower++;
			}
	}
	else 
		{
			cout << "Your string is morn than 10 character";
		}
	cout << endl;
	return(0);
}