#include <iostream>

using namespace std;

int main()
{
	int liczba_a;
	cout << "Podaj dowolna liczbe ca³kowit¹, a program stwierdzi czy liczba jest parzysta czy nieparzysta." << endl;
	cin >> liczba_a;

	if (liczba_a % 2 == 0)
	{
		cout << "Liczba jest parzysta.";
	}

	else 
	{
		cout << "Liczba jest nieparzysta.";
	}

}