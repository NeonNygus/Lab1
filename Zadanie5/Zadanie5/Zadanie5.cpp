#include <iostream>

using namespace std;

int main()
{
	float a, b;
	char choice;
	cout << "Podaj dwie dowolne liczby." << endl;
	cin >> a >> b;
	cout << "Wybierz dzialanie wprowadzaj¹c przypisany znak : " << endl;
	cout << "+  Suma" << endl << "-  Roznica" << endl << "*  Iloczyn" << endl << "/  Iloraz" << endl;
	cin >> choice;
	switch (choice)
	{
	case '+':
		cout << a + b;
		break;

	case '-':
		cout << a - b;
		break;

	case '*':
		cout << a * b;
		break;

	case '/':
		if (b != 0)
			cout << a / b;
		else
			cout << "Nie mozna dzielic przez zero.";
		break;
	}

}