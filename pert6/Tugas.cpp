#include <iostream>
using namespace std;

class Menu {
private:
    int harga;
    int qty;
public:
    Menu() : harga(0), qty(0) {} 
    void setHarga(int harga) { this->harga = harga; }
    int getHarga() const { return harga; }
    void setQty(int qty) { this->qty = qty; }
    int getQty() const { return qty; }
    int getTotal() const { return harga * qty; }
};

class Program {
public:
    static void main() {
        cout << "DAFTAR MENU" << endl;
        cout << "1. TEH" << endl;
        cout << "2. KOPI" << endl;
        int choice;
        cin >> choice;
        switch (choice) {
            case 1: {
                Menu menuTeh;
                cout << "MENU TEH" << endl;
               
                menuTeh.setHarga(5000); 
                cout << "Harga Teh: " << menuTeh.getHarga() << endl;
                cout << "Masukkan jumlah Teh yang dibeli: ";
                int qty;
                cin >> qty;
                menuTeh.setQty(qty);
                cout << "Total Teh: " << menuTeh.getTotal() << endl;
                break;
            }
            case 2: {
                Menu menuKopi;
                cout << "MENU KOPI" << endl;
                
                menuKopi.setHarga(15000);
                cout << "Harga Kopi: " << menuKopi.getHarga() << endl;
                cout << "Masukkan jumlah Kopi yang dibeli: ";
                int qty;
                cin >> qty;
                menuKopi.setQty(qty);
                cout << "Total Kopi: " << menuKopi.getTotal() << endl;
                break;
            }
            default:
                cout << "Pilihan tidak valid" << endl;
        }
    }
};

int main() {
    Program::main();
    return 0;
}