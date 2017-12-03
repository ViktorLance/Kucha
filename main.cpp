#include "stdafx.h" 
#include <iostream> 
#include "lul.h"
using namespace std; 
int main()
{
	int count;
	double a=0;
	double b=0;
	
	cout << "Vvedite dva chisla: ";
	cin >> a;
	cin >> b;
	cout << "Vibirite deistvie: 1-clojenie; 2-vichitanie; 3-ymnojenie; 4-delenie: "; 
	cin >> count; 
	switch (count)
	{
	case 1:
	{ // +
		cout << Summ(a, b) << endl;
		break;
	}
	case 2:
	{ // -
		cout << Vich(a, b) << endl;
		break;
	}
	case 3:
	{ // *
	 //cout << ""<< endl; 
		break;
	}
	case 4:

	{ // /
	//cout << a << " / " << b << " = " << a / b << endl; 
		break;
	}
	}
	//cout << "" << endl;
	system("pause");
	return 0;
}