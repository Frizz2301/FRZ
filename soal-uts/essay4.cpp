#include <stdio.h>


void menu();
void tambah();
void kurang();
void kali();
void bagi();

int main() {
    int choice;

    do {
        menu();
        printf("Pilih operasi (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                tambah();
                break;
            case 2:
                kurang();
                break;
            case 3:
                kali();
                break;
            case 4:
                bagi();
                break;
            case 5:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan tidak valid, coba lagi.\n");
        }
    } while (choice != 5);

    return 0;
}

void menu() {
    printf("\nMenu Operasi Matematika:\n");
    printf("1. Tambah\n");
    printf("2. Kurang\n");
    printf("3. Kali\n");
    printf("4. Bagi\n");
    printf("5. Keluar\n");
}

void tambah() {
    int a, b;
    printf("Masukkan dua angka yang ingin ditambahkan: ");
    scanf("%d %d", &a, &b);
    printf("Hasil dari %d + %d = %d\n", a, b, a + b);
}

void kurang() {
    int a, b;
    printf("Masukkan dua angka yang ingin dikurangkan: ");
    scanf("%d %d", &a, &b);
    printf("Hasil dari %d - %d = %d\n", a, b, a - b);
}

void kali() {
    int a, b;
    printf("Masukkan dua angka yang ingin dikalikan: ");
    scanf("%d %d", &a, &b);
    printf("Hasil dari %d * %d = %d\n", a, b, a * b);
}

void bagi() {
    int a, b;
    printf("Masukkan dua angka yang ingin dibagi: ");
    scanf("%d %d", &a, &b);
    if (b != 0) {
        printf("Hasil dari %d / %d = %d\n", a, b, a / b);
    } else {
        printf("Error: Tidak bisa membagi dengan nol.\n");
    }
}