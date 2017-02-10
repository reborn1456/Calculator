#include <iostream>
#include <math.h>
#include <Windows.h>
#include <cmath>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
	
	//number the user will enter
	double num1, num2;
	int numForRadian = 180;
	//declaring the numbers the user will enter for the radius, area, etc.
	double pi, radius, area, circum, diam;
	//defining PI
	pi = 3.141592653589793238462643383279502884197169399375; 
	//declaring the numbers need for indexing
	float base, power, total; 
	float radian;
	int angle;
	double percentage;
	//char variable for math operators i.e "+", "*" etc
	char mathOp;
	//float variable for the total of the two numbers the user enters
	float sum; 
	string userInput;
	char choice;

	//do while to loop through the program
	do
	{
		//the menu
		cout << "Please choose the calculation you want to do : \n";
		cout << "1.Addition\n";
		cout << "2.Subtraction\n";
		cout << "3.Multiplication\n";
		cout << "4.Division\n";
		cout << "5.Power\n";
		cout << "6.Square Root\n";
		cout << "7.Circle Calculation\n";
		cout << "8.Degree to Radian\n";
		cout << "9.Percentage\n";
		cout << "10.Exit\n\n";
		cout << "Enter Your Choice : ";
		cin >> choice;

		switch (choice)
		{
		//addition
		case '1': cout << "Enter your calculation : ";
			//input integer
			cin >> num1; 
			//input operator
			cin >> mathOp;
			cin >> num2;
			switch (mathOp)
			{
			//doing the addition
				case '+': sum = num1 + num2; 
				break;
			}
			cout << "Result = " << sum;
			break;
		//subtraction
		case '2': cout << "Enter your calculation : ";
			//input integer
			cin >> num1;
			//input operator
			cin >> mathOp;
			cin >> num2;
			switch (mathOp)
			{
			//doing the subtraction
				case '-': sum = num1 - num2;
				break;
			}
			cout << "Result = " << sum;
			break;
		//multiplication
		case '3': cout << "Enter your calculation : ";
			//input integer
			cin >> num1;
			//input operator
			cin >> mathOp;
			cin >> num2;
			switch (mathOp)
			{
			//doing the subtraction
				case '*': sum = num1 * num2;
				break;
			}
			cout << "Result = " << sum;
			break;
		//division
		case '4': cout << "Enter your calculation : ";
			//input integer
			cin >> num1;
			//input operator
			cin >> mathOp;
			cin >> num2;
			switch (mathOp)
			{
				//doing the subtraction
			case '/': sum = num1 / num2;
				break;
			}
			cout << "Result = " << sum;
			break;
		//multiply to a power
		case '5': cout << "Enter your base number : ";
			cin >> num1;
			cout << "Enter the power : ";
			cin >> power;
			total = pow(num1, power);
			cout << "Result = " << total;
			break;
		//square root
		case'6': cout << "Please enter the number you want to Sqaure Root : ";
			cin >> num1;
			total = sqrt(num1);
			cout << "Result = " << total;
			break;
		//circle calculation
		case'7': cout << "What do you want to calculate? ";
			cout << "Area - 1" << endl;
			cout << "Circumference - 2" << endl;
			cin >> userInput;

			//if 1 is entered it will go to the area calculation
			if (userInput == "1")
			{
				cout << "Please input value of radius for the area: " << endl;
				//inputting radius
				cin >> radius;
				//calculating area e.g Pi*r^2
				area = pi * (radius*radius); 
				//outputting area
				cout << "The area of the circle is " << area << endl;
			}
			//if 2 is entered it will calculate circumference
			else if (userInput == "2") 
			{
				cout << "Please input the diameter of the circle for the circumference: " << endl;
				//inputting diameter
				cin >> diam;
				//calculating circumference e.g Pi*d
				circum = pi * diam;
				//outputting circumference
				cout << "The circumference is " << circum;
			break;
		//degree to radian
		case'8': cout << "Enter your angle : ";
			cin >> angle;
			radian = (pi / numForRadian) * angle;
			cout << angle << " degrees in radian is " << radian;
			break;
		//percentage
		case'9': cout << "Enter your calculation : ";
			//input integer
			cin >> num1;
			//input operator
			cin >> mathOp;
			cin >> num2;
			switch (mathOp)
			{
			case '/': percentage = num1 / num2 * 100;
				break;
			default:
				cout << "Error - Invalid Input!";
			}
			cout << "Result = " << percentage;
			break;
		//to exit the program
		case '10': exit(0);
			break;

		//if a number which is not included is typed
		default: cout << "Wrong Choice..!!";
			break;
		}

		//make a 分隔線
		cout << "\n------------------------------------\n";

	} while (choice != 5 && choice != getchar());
	
	return 0;
}