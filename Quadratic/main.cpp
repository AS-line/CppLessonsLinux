#include <iostream>
#include <string>
#include <math.h>
#include <ctime>
using namespace std;

void func(double a, double b, double c) {
	float D = (b*b) - (4*a*c);

	if (D < 0) {
		cout << "Дискриминант D равен " << D << endl;
		cout << "Корней нет." << endl;
	}
	if (D > 0) {
		double x_1, x_2;
		x_1 = (-b + sqrt(D)) / (2*a);
		x_2 = (-b - sqrt(D)) / (2*a);
		cout << "Дискриминант D равен " << D << endl;
		cout << "Корней два:" << "\n" << "x_1 = " << x_1 << "\n" << "x_2 = " << x_2 << "\n" ;
	}
	if (D == 0) {
		double x;
		x = (-b + sqrt(D)) / (2 * a);
		cout << "Дискриминант D равен " << D << endl;
		cout << "Корень один:" << "\n" << "x = " << x;
	}

}

int main()
{
	double a, b, c;


	bool check = true;
	cout << "ax2 + bx + c = 0" << "\nВведите значения a, b, c" << endl;
	while (check == true) {

		cout << "a:";
		cin >> a;
		cout << "b:";
		cin >> b;
		cout << "c:";
		cin >> c;
		cout << "\n";

		func(a, b, c);

		int choice;
		cout << "\n\n1)Далее" << "\n" << "2)Выход" << "\n" << ">>>";
		cin >> choice;
		if (choice == 1) {
			continue;
		}
		if (choice == 2) {
			break;
		}
	}
	cout << endl;
    return 0;
}
