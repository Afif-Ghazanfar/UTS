#include <iostream>
using namespace std;

int main() {
    double beratBadan, tinggiBadan, imt;

    cout << "Masukkan berat badan (kg): ";
    cin >> beratBadan;
    cout << "Masukkan tinggi badan (meter): ";
    cin >> tinggiBadan;

    imt = beratBadan / (tinggiBadan * tinggiBadan);

    cout << "IMT anda: " << imt << endl;

    if (imt <= 18.4) {
        cout << "Kriteria: Berat Badan Kurang" << endl;
    }
    else if (imt >= 18.5 && imt <= 24.9) {
        cout << "Kriteria: Berat Badan Ideal" << endl;
    }
    else if (imt >= 25 && imt <= 29.9) {
        cout << "Kriteria: Berat Badan Lebih" << endl;
    }
    else if (imt >= 30 && imt <= 39.9) {
        cout << "Kriteria: Gemuk" << endl;
    }
    else {
        cout << "Kriteria: Sangat Gemuk" << endl;
    }

    return 0;
}
