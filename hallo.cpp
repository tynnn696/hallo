// Commit: Mengubah program agar menerima input jumlah nama yang ingin diproses
#include <iostream>
#include <string>
using namespace std;

int main() {
    int jumlah;
    cout << "Masukkan jumlah nama yang ingin dimasukkan: ";
    cin >> jumlah;

    // Buat array dinamis
    string* names = new string[jumlah];

    // Input nama
    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan nama ke-" << (i + 1) << ": ";
        cin >> names[i];
    }

    // Tampilkan nama
    cout << "\nDaftar Nama:\n";
    for (int i = 0; i < jumlah; i++) {
        cout << names[i] << endl;
    }

    // Bebaskan memori
    delete[] names;

    return 0;
}
