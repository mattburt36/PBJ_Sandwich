using namespace std; 
#include <iostream>
#include <string> 
//PBJ
void choices()
{
	cout << "Would you like to make a sandwich? (y/n)""\n";
	char y = 0;
	cin >> y;
	if (y > 0)
	{
		cout << "Cool! beggining process..." "\n";
	}
	else
		cout << "Cool, no dice""\n";
};

