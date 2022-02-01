#include <iostream>
#include "SortingAlgorithms.h"
#include "SortingAlgorithms.cpp"



int main()
{
    std::cout << "Hello, World!" << std::endl;
    int arr[] = { 5, 0, 3, 4 };
    double darr[] = { 1.03, 0.34, 7., 6. ,8., 1., -1. };
    BubbleSort(arr, sizeof(arr) / sizeof(arr[0]));
    nowakSort(darr, sizeof(darr) / sizeof(darr[0]));

    for (double i : darr) {
        std::cout << i << "\n";
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
