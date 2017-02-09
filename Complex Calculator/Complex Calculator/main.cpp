#include <iostream>
#include <math.h>
#include <Windows.h>
#include <cmath>

using namespace std;

int main()
{

	float a, b, res;
	double c;
	float power = 2;
	char choice;

	do
	{
		cout << "1.Addition\n";
		cout << "2.Subtraction\n";
		cout << "3.Multiplication\n";
		cout << "4.Division\n";
		cout << "5.Square\n";
		cout << "6.Square Root\n";
		cout << "7.Exit\n\n";
		cout << "Enter Your Choice : ";
		cin >> choice;
		switch (choice)
		{
		case '1': cout << "Enter two number : ";
			cin >> a >> b;
			res = a + b;
			cout << "Result = " << res;
			break;
		case '2': cout << "Enter two number : ";
			cin >> a >> b;
			res = a - b;
			cout << "Result = " << res;
			break;
		case '3': cout << "Enter two number : ";
			cin >> a >> b;
			res = a*b;
			cout << "Result = " << res;
			break;
		case '4': cout << "Enter two number : ";
			cin >> a >> b;
			res = a / b;
			cout << "Result = " << res;
			break;
		case '5': cout << "Enter a number : ";
			cin >> c;
			res = pow(c,power);
			cout << "Result = " << res;
			break;
		case'6': cout << "Enter a number : ";
			cin >> c;
			res = sqrt(c);
			cout << "Result = " << res;
			break;
		case '7': exit(0);
			break;

		default: cout << "Wrong Choice..!!";
			break;
		}
		cout << "\n------------------------------------\n";
	} while (choice != 5 && choice != getchar());
	
	return 0;
}