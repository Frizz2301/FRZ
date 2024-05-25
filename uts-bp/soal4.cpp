#include <iostream>

int main() {
    int tahun_lahir;
    int tahun_sekarang = 2024;

    std::cout << "Masukkan tahun lahir kalian: ";
    std::cin >> tahun_lahir;

    int usia = tahun_sekarang - tahun_lahir;

    std::cout << "Berarti Usia Kalian sekarang adalah " << usia << " Tahun" << std::endl;

    return 0;
}