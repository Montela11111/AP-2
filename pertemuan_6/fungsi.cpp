#include <iostream>
using namespace std;

// Fungsi tanpa nilai balikan (void)
void tampilkanPesan() {
    cout << "========= Selamat Datang di AP 2 ===========" << endl;
}

// Fungsi dengan nilai balikan
int tambah(int a, int b) {
    return a + b;
}

// Fungsi overload (nama sama, parameter beda tipe)
int kali(int a, int b) {
    return a * b;
}

double kali(double a, double b) {
    return a * b;   
}

// Fungsi rekursif (faktorial)
int faktorial(int n) {
    if (n == 0 || n == 1) { // base case
        return 1;
    } else {
        return n * faktorial(n - 1); // recursive case
    }
}

int main() {
    system("cls"); // untuk clear layar (Windows)

    // Memanggil fungsi tanpa nilai balikan adalah yang tidak mengembalikan nilai ke pemanggil, tapi hanya menjalankan perintah.
    tampilkanPesan();

    // Fungsi tambah
    int x = 5, y = 3;
    int hasilTambah = tambah(x, y);
    cout << "Hasil penjumlahan: " << hasilTambah << endl;

    // Fungsi overload kali
    int hasilKaliInt = kali(x, y);
    double n = 3.5, m = 5.2;
    double hasilKaliDouble = kali(n, m);

    cout << "Hasil perkalian (int): " << hasilKaliInt << endl;
    cout << "Hasil perkalian (double): " << hasilKaliDouble << endl;

    // Fungsi rekursif faktorial
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah: " << faktorial(angka) << endl;

    return 0;
}