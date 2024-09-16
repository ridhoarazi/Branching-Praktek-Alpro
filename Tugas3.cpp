#include <iostream>
using namespace std;

int main() {
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 90) {
        cout << "Selamat! Anda mendapatkan nilai A." << endl;
    } else if (nilai >= 80) {
        cout << "Anda mendapatkan nilai B." << endl;
    } else if (nilai >= 70) {
        cout << "Anda mendapatkan nilai C." << endl;
    } else if (nilai >= 60) {
        cout << "Anda mendapatkan nilai D." << endl;
    } else {
        cout << "Anda mendapatkan nilai E." << endl;
    }

    return 0;
}
