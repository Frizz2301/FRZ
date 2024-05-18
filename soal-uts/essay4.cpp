#include <iostream>

using namespace std;

void menu();
int tambah(int, int);
int kurang(int, int);
int kali(int, int);
int bagi(int, int);

int main() {
    menu();
    int num1, num2;
    int choice;
    cout << "Masukkan 2 angka: ";
    cin >> num1 >> num2;
    cout << "1. tambah\n2. kurang\n3. kali\n4. bagi\nMasukan Pilihan Anda: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "The result is: " << tambah(num1, num2) << endl;
            break;
        case 2:
            cout << "The result is: " << kurang(num1, num2) << endl;
            break;
        case 3:
            cout << "The result is: " << kali(num1, num2) << endl;
            break;
        case 4:
            if (num2 != 0)
                cout << "The result is: " << bagi(num1, num2) << endl;
            else
                cout << "Error: Division by zero is not allowed." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
            break;
    }
    return 0;
}

void menu() {
    cout << "Sistem Operasi!\n";
}

int tambah(int num1, int num2) {
    return num1 + num2;
}

int kurang(int num1, int num2) {
    return num1 - num2;
}

int kali(int num1, int num2) {
    return num1 * num2;
}

int bagi(int num1, int num2) {
    return num1 / num2;
}