#include <iostream>
using namespace std;

    int main() {
        int n; // Zmienna n przechowuje wysokość piramidy
    //a b n mozna nazwać dowolnie
        cout << "Podaj wysokosc piramidy: "; // Wyświetlenie komunikatu o podanie wysokości piramidy
        cin >> n; // Wczytanie wartości wysokości piramidy
    
        for (int a = 1; a <= n; ++a) { // Pętla zewnętrzna kontroluje ilość wierszy piramidy
            for (int b = 1; b <= a; ++b) { // Pętla wewnętrzna generuje liczby w każdym wierszu
                cout << (b - 1) % 4 + 1; // Wyświetlanie liczby w danym wierszu (1 do 4, cyklicznie)
            }
            cout << endl; // Przejście do nowej linii po zakończeniu wypisywania liczby w danym wierszu
        }
    
        return 0; // Zakończenie programu
    }
