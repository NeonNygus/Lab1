#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
	/* Zadanie 1
	int tab[10], x = 3;

	for (int i = 0; i < 10; i++)
	{
		tab[i] = x;
		cout << tab[i] << " ";
		x += 3;
	}
	*/

	/* Zadanie 2
	int tab[10], x = 3;

	for (int i = 0; i < 10; i++)
	if(i%2==0)
	{
		tab[i] = x;
		cout << tab[i] << " ";
		x += 3;
	}
	*/

	/* Zadanie 3
	int tab[10], x = 0, a;

	cout << "Podaj a: ", cin >> a;
	cout << "\ntablica:\n";
	for (int i = 9; i >= 0; i--)
	{
		tab[i] = a - x;
		cout << tab[i] << " ";
		x += 5;
	}
	cout << "\ntablica: \n";
	for (int i = 0; i < 10; i++)
	{
		cout << tab[i] << " ";
	}
	*/

	/*
	int n, i, liczba;
	int tab[n];

	cout << "Podaj liczbê elementów tablicy: ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		srand(time(NULL));
		liczba = rand() % 50 + -23;
		cout << liczba;

	}
	*/

	/* Zadanie 5
	int tab[6], i;

	cout << "Podaj dwie liczby: " << endl;
		cin >> tab[0] >> tab[1];
	for (i = 2; i < 6; i++)
	{
		tab[i] = tab[i-1] + tab[i-2];
		cout << tab[i] << " ";
	}
	*/

	/* Zadanie 6
	int tab[20], i;

	cout << "Podaj 10 liczb : " << endl;

	for (i = 0; i < 10; i++)
	{
		cin >> tab[i];
	}
	for (i = 10; i < 20; i++)
	{
		tab[i] = tab[i - 10];
	}
	for (i = 0; i < 20; i++)
	{
		cout << tab[i] << " ";
	}
	*/

	/* Zadanie 8
	int tab2D[4][4] = { 10,2,3,4,5,10,7,8,9,10,11,12,13,14,15,11 }, i = 0,j = 0;
	int tab2E[4][4] = { 10,2,3,4,5,10,7,8,9,10,11,12,13,14,15,11 };
	int tab2F[4][4];

	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			tab2F[i][j] = tab2E[i][j] + tab2D[i][j];
		}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << tab2F[i][j] << " ";
	}

	*/
}

