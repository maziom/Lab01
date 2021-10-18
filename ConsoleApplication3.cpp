// ConsoleApplication3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>


using namespace std;



int main()
{
	//zad 1

	//int nr_albumu = 65572;
	//cout << "Nr albumu: " << nr_albumu << endl;


	//zad 2

	//int a, b;
	//cout << "Podaj a: ", cin >> a;

	//if (a % 2 == 0) {

		//cout << "Liczba parzysta\n";

	//}
	//else {
		//cout << "Liczba nie parzysta" << endl;
	//}

	//zad 3

	//float a1, b1;
	//cout << "Podaj a1: ", cin >> a1;
	//cout << "Podaj b2: ", cin >> b1;

	//if (a1 == b1) {

		//cout << "Liczby są rowne" << endl;


	//}
	//else if (a1 > b1) {

		//cout << "a jest wieksze" << endl;

	//}
	//else
		//cout << "b jest wieksze\n";
	
	
		
		//zad4
  //float srednia, a, b, c, d;
  //cout << "podaj cztery liczby: " << endl;
  //cout << " a wynosi: ";
  //cin >> a;
  //cout << " b wynosi: ";
  //cin >> b;
  //<< " c wynosi: ";
  //cin >> c;
  //cout << " d wynosi: ";
  //cin >> d;
  //srednia = (a + b + c + d) / 4;
  //cout << "srednia wynosi: " << srednia;

	//zad5
	int wybor;
	float c, d;
	cout << "Podaj c: ", cin >> c;
	cout << "Podaj d: ", cin >> d;

	cout << "\n================\n";
	cout << "\n1. Suma\n2. Roznica\n,3. Iloczyn\n4. Iloraz\n";
	cout << "Wybierz dzialanie: ", cin >> wybor;

	switch (wybor)
	{
	case 1:
		cout << "Suma: " << c << " + " << d << " = " << c + d << endl;
		break;
	case 2:
		cout << "Roznica: " << c << " - " << d << " = " << c - d << endl;
		break;
	case 3:
		cout << "Iloczyn: " << c << " * " << d << " = " << c * d << endl;
		break;
	case 4:
		cout << "Iloraz: " << c << " / " << d << " = " << c / d << endl;
		break;
	default:
		cout << "Nie ma takiej opcji\n";
		break;

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
