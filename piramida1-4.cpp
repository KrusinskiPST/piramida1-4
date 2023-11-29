#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Podaj wysokosc piramidy: "; 
    cin >> n; 

    for (int a = 1; a <= n; ++a) {
        for (int b = 1; b <= a; ++b) { 
            cout << (b - 1) % 4 + 1; 
        }
        cout << endl; 
    }

    return 0; 
}