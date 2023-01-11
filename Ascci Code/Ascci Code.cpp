#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	system("color 2f");
	char ch;
	do{
		cout << "Enter your Character in Order to Get the ASCCII Code, or . to Exit: ";
		ch = _getche();
		cout << endl;
		cout << "The ASCCII Code of " << ch << " is: " <<(int)ch << endl << endl << endl;
	}
	while(ch!='.');
	system("pause");
	return 0;
	
}
