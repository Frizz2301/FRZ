#include <iostream>
#include <string>
using namespace std;

class Nama {
public:
    string fName, mName, lName;
    void full() {
        cout << "FULL NAME : " << fName + " " << mName << " " << lName << endl;
    }
};

int main() {
    Nama n;
    int pilih;
    char pil;
    do {
        cout << "MENU" << endl;
        cout << "1. Input" << endl;
        cout << "2. Exit" << endl;
        cout << "pilihan : ";
        cin >> pilih;

        switch (pilih) {
        case 1:
            cout << "Masukkan Nama Depan : ";
            cin >> n.fName;
            cout << "Masukkan Nama Tengah : ";
            cin >> n.mName;
            cout << "Masukkan Nama Akhir : ";
            cin >> n.lName;
            n.full();
            break;
        case 2:
            cout << "\n TERIMA KASIH" << endl;
            return 0;
        default:
            cout << "Pilihan Salah" << endl;
            break;
        }

        cout << "Ingin Mengulangi ? (Y/N) : ";
        cin >> pil;
    } while (pil == 'Y' || pil == 'y');

    cout << "\n TERIMA KASIH" << endl;
    return 0;
}