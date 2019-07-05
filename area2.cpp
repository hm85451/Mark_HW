// this program will calculate the area of the selected object
#include <iostream>
#include<cmath>

using namespace std;

int main()
{
	// define variables
	int choice;
		double area_square, area_circle, area_triangle, pi, length, base, high, radius;
		pi = 3.14159;

		// display manu
    do{
		cout << "Choose an object to find its area:\n";
	cout << "1.square\n2.circle\n3.right triangle\n4.quit\n";
	// input option	
	cin >> choice;
	// result of each choice
	if (choice == 1)
	{
		cout << "Please enter the length: \n";
		cin >> length;
		area_square = length * length;
		cout << "The area of the Square is " << area_square << "." << endl;
	}
	else if (choice == 2)
	{
		cout << "Please enter the radius: \n";
		cin >> radius;
			area_circle = pi * pow(radius, 2);
		cout << "The area of the circle is " << area_circle << "." << endl;
	}

	else if (choice == 3)
	{
		cout << "Please enter the base: \n";
		cin >> base;
		cout << "Please enter the high: \n";
		cin >> high;
			area_triangle = (base * high) / 2;
		cout << "The area of the right triangle is " << area_triangle << "." << endl;
	}
	else
	{
		cout << "error";
	}
}while(choice != 4);
system("pause");
return 0;
}



