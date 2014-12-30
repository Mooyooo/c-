/*
 * CiExample.cpp
 *
 *  Created on: Dec 26, 2014
 *      Author: Mo
 */

#include <iostream>
#include <iomanip>

using namespace std;

int defineFunc(int x);
int add(int x, int y) {
	return x + y;
}
int doubleNumber(int x) {
	return x * 2;
}

int printIt() {
	cout << "Enter the number:" << endl;
	int x;
	cin >> x;
	cout << "You entered " << x << endl;
	cout << "Add:" << add(5, 4) << endl;
	cout << "double number:" << doubleNumber(5) << endl;
	cout << defineFunc(1) << endl;

	return 0;
}

int defineFunc(int x) {
	return 0;
}

int readNumber()
{
	int x;
	cout <<"Enter number:" << endl;
	cin >> x;
	return x;
}

void writeAnswer(int x)
{
	cout << "resut:" << x << endl;
}

void printDataTypes(){

	cout << "bool: \t\t" << sizeof(bool) << " bytes" << endl;
	cout << "char: \t\t" << sizeof(bool) << " bytes" << endl;
	cout << "wChar_t: \t" << sizeof(wchar_t) << " bytes" << endl;
	cout << "short: \t\t" << sizeof(short) << " bytes" << endl;
	cout << "int: \t\t" << sizeof(int) << " bytes" << endl;
	cout << "long:\t\t" << sizeof(long) << " bytes" << endl;
	cout << "float: \t\t" << sizeof(float) << " bytes" <<endl;
	cout << "double: \t" << sizeof(double) << " bytes" << endl;
	cout << "long double: \t" << sizeof(long double) << " bytes" << endl;
	cout << "short int: \t" << sizeof(short int) << " bytes" << endl;
}

void overflow()
{
	unsigned short x=65535;
	cout << "x was:" << x << endl;
	x=x+2;
	cout << "x is now:" << x << endl;
}

/*
 * When outputting floating point numbers, cout has a default precision of 6 — that is,
 * it assumes all variables are only significant to 6 digits,
 * and hence it will truncate anything after that.
 */
void printFloat()
{
	float fValue;
	    fValue = 1.222222222222222f;
	    cout << fValue << endl;
	    fValue = 111.22222222222222f;
	    cout << fValue << endl;
	    fValue = 111111.222222222222f;
	    cout << fValue << endl;
}

void setPrecision()
{
	 cout << setprecision(16); // show 16 digits
	 float fValue = 3.33333333333333333333333333333333333333f;
	 cout << fValue << endl;
	 double dValue = 3.3333333333333333333333333333333333333;
	 cout << dValue << endl;
}
