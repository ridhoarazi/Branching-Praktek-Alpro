#include <iostream>
#include <string>
using namespace std;

int main() {
    string bentuk;
    cout << "Pilih bentuk (persegi, persegi panjang, segitiga): ";
    getline(cin, bentuk);

    if (bentuk == "persegi") {
        double sisi;
        cout << "Masukkan panjang sisi persegi: ";
        cin >> sisi;
        double luasPersegi = sisi * sisi;
        cout << "Luas persegi adalah: " << luasPersegi << endl;
    }
    else if (bentuk == "persegi panjang") {
        double panjang, lebar;
        cout << "Masukkan panjang persegi panjang: ";
        cin >> panjang;
        cout << "Masukkan lebar persegi panjang: ";
        cin >> lebar;
        double luasPersegiPanjang = panjang * lebar;
        cout << "Luas persegi panjang adalah: " << luasPersegiPanjang << endl;
    }
    else if (bentuk == "segitiga") {
        double alas, tinggi;
        cout << "Masukkan panjang alas segitiga: ";
        cin >> alas;
        cout << "Masukkan tinggi segitiga: ";
        cin >> tinggi;
        double luasSegitiga = 0.5 * alas * tinggi;
        cout << "Luas segitiga adalah: " << luasSegitiga << endl;
    }
    else {
        cout << "Bentuk tidak dikenali!" << endl;
    }

    return 0;
}
