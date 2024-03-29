// PrimeGenratorV2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;


bool prime(int x)
{
	int sq;
	if (x == 1)
		return false;
	if (x == 2)
		return true;
	if (x % 2 == 0)
		return false;
	sq = sqrt(x);

	for (int i = 2; i <= sq; i++)
		if (x%i == 0)
			return false;

	return true;
}

int main()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; i++)
	{
		long m, n, k = 0;

		cin >> m >> n;

		for (m; m <= n; m++)
		{
			if (prime(m))
				cout << m << endl;
		}
	}

	return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
