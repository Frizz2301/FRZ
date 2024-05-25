#include <iostream>
#include <cctype>
#include <string>
#include <vector>

using namespace std;

// Fungsi untuk menghitung jumlah konsonan dan vokal dalam sebuah kalimat
void hitungKonsonanVokal(string kalimat, int& vokal, int& konsonan, vector<char>& hurufVokal, vector<char>& hurufKonsonan) {
    vokal = 0;
    konsonan = 0;
    
    for(char karakter : kalimat) {
        if(isalpha(karakter)) {
            if(tolower(karakter) == 'a' || tolower(karakter) == 'i' || tolower(karakter) == 'u' || tolower(karakter) == 'e' || tolower(karakter) == 'o') {
                vokal++;
                hurufVokal.push_back(karakter);
            } else {
                konsonan++;
                hurufKonsonan.push_back(karakter);
            }
        }
    }
}

// Fungsi untuk mencari data tertentu dalam kalimat
bool cariData(string kalimat, string data) {
    // Mencari data dalam kalimat (mengabaikan perbedaan huruf besar-kecil)
    size_t pos = kalimat.find(data);
    return pos != string::npos;
}

int main() {
    string kalimat, dataCari;
    int vokal, konsonan;
    vector<char> hurufVokal, hurufKonsonan;
    
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);
    
    // Menghitung jumlah konsonan dan vokal dalam kalimat
    hitungKonsonanVokal(kalimat, vokal, konsonan, hurufVokal, hurufKonsonan);
    
    // Menampilkan jumlah vokal dan konsonan beserta hurufnya
    cout << "Vokal: " << vokal << " (";
    for (char huruf : hurufVokal) {
        cout << huruf << " ";
    }
    cout << ")" << endl;
    
    cout << "Konsonan: " << konsonan << " (";
    for (char huruf : hurufKonsonan) {
        cout << huruf << " ";
    }
    cout << ")" << endl;
    
    // Meminta data yang akan dicari
    cout << "Masukkan data yang anda cari: ";
    cin >> dataCari;
    
    // Mencari data dalam kalimat
    if (cariData(kalimat, dataCari)) {
        cout << "Data ditemukan dalam kalimat." << endl;
    } else {
        cout << "Data tidak ditemukan dalam kalimat." << endl;
    }
    
    return 0;
}
