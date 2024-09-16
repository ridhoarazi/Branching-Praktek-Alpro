#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    cout << "Masukkan angka ketiga: ";
    cin >> c;

    if (a >= b && a >= c) {
        cout << "Angka terbesar adalah: " << a << endl;
    } else if (b >= a && b >= c) {
        cout << "Angka terbesar adalah: " << b << endl;
    } else {
        cout << "Angka terbesar adalah: " << c << endl;
    }

    return 0;
}
