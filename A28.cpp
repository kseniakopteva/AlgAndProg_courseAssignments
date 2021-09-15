//	+---------------------------------------------------+
//	| Ksenija Kopteva, kk21130                          |
//	+---------------------------------------------------+
//	| A28.Dots naturāls skaitlis n. Izdrukāt dotajam    |
//	| skaitlim simetrisku skaitli. Skaitļa dalīšana	    |
//	| ciparos jāveic skaitliski. (Piemēram, skaitlim    |
//	| 2341 simetriskais skaitlis ir 1432).              |
//	+---------------------------------------------------+
//	| Programma izveidota : 2021 / 09 / 15              |
//	+---------------------------------------------------+

#include <iostream>
using namespace std;

int main() {
    // izmantot UTF-8 kodējumu
    system("chcp 65001  > nul");

	int iziet;

	// cikls, kas nosaka, lai programma atkārtotos
	do {
		int n;

		cout << "Ievadiet naturālo skaitli: " << endl;
		cin >> n;

		// cikls, kur tiek parbaudīts, vai ir ievadīts naturāls skaitlis
		while (n < 0 || cin.fail()) {
			cout << "Ievadītie dati nav korekti. \nIevadiet naturālo skaitli: " << endl;

			cin.clear();
			cin.ignore(INT_MAX, '\n');

			cin >> n;
		}

		// mainīgais atlikumam, kas būs nepieciešams aprēķinos, un gala rezultātam
		int atlikums = 0,
			simetrisksN = 0;

		// aprēķinu bloks, kur skaitlis dalās ar 10 un ar atlikumu palīdzību pārvēršas par simetrisku skaitli
		while (n != 0) {
			atlikums = n % 10;
			simetrisksN = simetrisksN * 10 + atlikums;
			n /= 10;
		}

		cout << "Simetrisks skaitlis ir " << simetrisksN << "." << endl << endl;

		cout << "Vai turpināt (1) vai beigt (0)?" << endl;
		cin >> iziet;

	} while (iziet == 1);
}

//			Testa plāns kopā ar testēšanas rezultātiem
//   +--------+-----------------------------+---------------+------------------+
//   | Ievads | Programmas vēlāmā reakcija  | Rezultāts C++ | Rezultāts Python |
//   +--------+-----------------------------+---------------+------------------+
//   | 2341   | 1432                        | +             | +                |
//   | 0      | 0                           | +             | +                |
//   | -256   | Ievadītie dati nav korekti. | +             | +                |
//   | asd    | Ievadītie dati nav korekti. | +             | +                |
//   | _./    | Ievadītie dati nav korekti. | +             | +                |
//   +--------+-----------------------------+---------------+------------------+





