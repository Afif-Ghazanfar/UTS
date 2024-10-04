#include<iostream>
using namespace std;

int main(){
string nama;
string npm;
float nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS, nilaiAkhir;

cout <<"masukan NAMA: ";
cin >> nama;
cout <<"masukan NPM: ";
cin >> npm;
cout <<"masukan nilai Absen: ";
cin >> nilaiAbsen;
cout <<"masukan nilai Tugas : ";
cin >> nilaiTugas;
cout <<"masukan nilai UTS : ";
cin >> nilaiUTS;
cout <<"masukan nilai nilaiUAS : ";
cin >> nilaiUAS;

nilaiAkhir = (nilaiAbsen * 0.10) + (nilaiTugas * 0.20) + (nilaiUTS * 0.30) + (nilaiUAS * 0.40);

cout << "\nNama: " << nama << endl;
cout << "NPM: " << npm << endl;
cout << "Nilai Absen: " << nilaiAbsen << endl;
cout << "Nilai Tugas: " << nilaiTugas << endl;
cout << "Nilai UTS: " << nilaiUTS << endl;
cout << "Nilai UAS: " << nilaiUAS << endl;
cout << "Nilai Akhir: " << nilaiAkhir << endl;

if (nilaiAkhir >= 85 && nilaiAkhir < 100) {
        cout << "huruf mutu : A";
    } else if (nilaiAkhir >= 80 && nilaiAkhir < 85) {
        cout << "huruf mutu : B";
    } else if (nilaiAkhir >= 75 && nilaiAkhir < 80) {
        cout << "huruf mutu : C";
    } else if (nilaiAkhir >= 70 && nilaiAkhir < 75) {
        cout << "huruf mutu : D";
    } else {
        cout <<"huruf mutu : E";
    }
    
    return 0;
}
