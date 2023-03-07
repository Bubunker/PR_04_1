#include "math.h"
#include <cmath>
#include "iostream"
#include <string>
#include <iomanip>
#include <algorithm>
#include <fstream>
#include <stdio.h>

using namespace std;

// перегрузить оператор сравнения зарплаты 2 человек

class Srav
{
public:
	Srav(int pr)
	{
		price = pr;
	}
	void displ1()
	{
		if (price > 0)
		{
			cout << "\n1st price > 2nd price.\n";
		}
		else if (price < 0)
		{
			cout << "\n1st price < 2nd price.\n";
		}
		else
		{
			cout << "\n1st price = 2nd price.\n";
		}
	}
	int price;
};

Srav operator - (Srav c1, Srav c2)
{
	return Srav(c1.price - c2.price);
}

int main()
{
	int a, b;
	cout << "\nEnter 1st price:\t";
	cin >> a;
	cout << "\nEnter 2nd price:\t";
	cin >> b;

	Srav c1(a);
	Srav c2(b);
	Srav c3 = c1 - c2;

	c3.displ1();   

	return 0;
}