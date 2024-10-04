#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan Angka : ";
    cin >> n;

    cout << "Bilangan Ganjil :" << endl;
    for(int i = 1; i < n; i += 2) {
        cout << i << endl;
    }

    cout << "\nBilangan Genap :" << endl;
    for(int i = 0; i < n; i += 2) {
        cout << i << endl;
    }

    return 0;
}