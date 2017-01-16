#include <iostream>
using namespace std;

double CalculateFactorial(double factorial);

int main()
{
	double number, factorial;
	cout << "Enter a number to calculate the factorial: ";
	cin >> number;
	factorial = CalculateFactorial(number);
	cout << "The factorial of the number " << number << " is " << factorial << endl;
	system("pause");
	return 0;
}

double CalculateFactorial(double factorial)
{
	double number;
	for (int i = factorial - 1; i > 0; i--)
	{
		number = factorial;
		factorial = factorial * (double)i;
		cout << number << " x " << i << " = " << factorial << endl;
	}
	return factorial;
}
/*
Enter a number to calculate the factorial: 5
5 x 4 = 20
20 x 3 = 60
60 x 2 = 120
120 x 1 = 120
The factorial of the number 5 is 120
Press any key to continue . . .*/