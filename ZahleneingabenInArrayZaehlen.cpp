#include <iostream>
using namespace std;

int main()
{
	unsigned int eingabe_array[9] = { 0 };
	unsigned int zaehlen_array[6] = { 0 };
	for (int i = 0; i < 9; i++)
	{
		int eingabe;
		do
		{
			cout << "Bitte geben Sie die " << i + 1 << ". Zahl ein: ? ";
			cin >> eingabe;
		} while (eingabe < 1 || eingabe > 6);
		eingabe_array[i] = eingabe;
	}

	for (int i = 0; i < 9; i++)
	{
		cout << "Die " << i + 1 << ". eingegebene Zahl lautete: " << eingabe_array[i] << endl;
	}

	for (int j = 0; j < 6; j++)
	{
		unsigned int zaehlen = 0;
		for (int i = 0; i < 9; i++)
		{
			if (eingabe_array[i] == j + 1)
			{
				zaehlen_array[j]++;
			}
		}
		cout << "Die Zahl " << j + 1 << " wurde " << zaehlen_array[j] << " mal eingegeben." << endl;
	}

	system("PAUSE");
	return 0;
}