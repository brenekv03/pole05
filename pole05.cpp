// pole05.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//

#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand((unsigned)time(NULL));
	int pole[10];
	int n;
	int min = INT32_MAX;
	int max = INT32_MIN;
	int poradiMin = 0;
	int poradiMax=0;
	cout << "Zadejte pocet cisel v poli, max 10: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int cislo = 50 + rand() % (250 - 50 + 1);
		if (cislo > max)
		{
			max = cislo;
			poradiMax = i;
		}
		if (cislo < min)
		{
			min = cislo;
			poradiMin = i;
		}
		cout << endl << cislo;
		pole[i] = cislo;
	}
	cout << endl;
	for(int x : pole)
	{
		cout << endl << x;
	}
	pole[poradiMax] = min;
	pole[poradiMin] = max;
	cout << endl;
	for (int x : pole)
	{
		cout << endl << x;
	}
	return 0;
}

