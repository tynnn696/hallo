// Commit: Menampilkan data dalam array
#include <iostream>
#include <string>
using namespace std;

int main() {
    string names[5];

    names[0] = "Dustyn";
    names[1] = "Rakha";
    names[2] = "Eko";
    names[3] = "Bima";
    names[4] = "Bingo";

    cout << "Daftar Nama:\n";
    for (int i = 0; i < 5; i++) {
        cout << names[i] << endl;
    }

    return 0;
}
