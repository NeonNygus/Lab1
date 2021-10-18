#include <iostream>

using namespace std;

int main()
{
	float liczba_a, liczba_b;
	cout << "Podaj dwie dowolne liczby, a program powie, ktora z liczb jest wieksza (lub czy obie liczby sa rowne)." << endl;
	cout << "Podaj pierwsza liczbe :" << endl;
	cin >> liczba_a;
	cout << "Podaj druga liczbe :" << endl;
	cin >> liczba_b;

	if (liczba_a > liczba_b)
		cout << "Pierwsza liczba jest wieksza od drugiej.";
	
	else if (liczba_a == liczba_b)
	cout << "Obie liczby sa rowne.";
	
	else
		cout << "Drugia liczba jest wieksza od pierwszej.";


}