#include <iostream>
using namespace std;

int main() {
    system("CLS");

    // 1. Operasi Penugasan
    cout << "=== Operasi Penugasan=== " << endl;
    int a = 10;
    int *p;
    p = &a; // Pointer simpan alamat a

    cout << "Nilai a : " << a << endl; // 10
    cout << "Alamat a (&a) : " << &a << endl; // Alamat var a
    cout << "Isi Pointer P : " << p << endl; // Alamat var a
    cout << "Nilai *p : " << *p << endl ; // 10

    // 2. Operasi Aritmatika
    cout << "=== Operasi Aritmatika=== " << endl;
    int nilai[3]; // Array 3 angka
    int *oke;

    nilai[0] = 125;
    nilai[1] = 345;
    nilai[2] = 750;

    oke = &nilai[0]; // oke menyimpan alamat nilai[0]

    cout << "Nilai " << *oke << " ada di alamat " << oke << endl;
    cout << "Nilai " << *(oke + 1) << " ada di alamat " << (oke + 1) << endl;
    cout << "Nilai " << *(oke + 2) << " ada di alamat " << (oke + 2) << endl;


    // 3. Operasi Logika
    cout << "=== Operasi Logika=== " << endl;
    int x = 5 , y = 10;
    int *p1 = &x; // alamat x
    int *p2 = &y; // alamat y
    int *p3 = &x; // alamat x

    if (p1 == p3) {
        cout << "p1 dan p3 menunjuk alamat yang sama " << endl;

    }
    
    if (p1 != p2) {
        cout << " p1 dan p2 menunjuk alamat yang beda" << endl;

    }

    int *p4 = NULL; // Tidak menunjuk kemana mana
    if (p4 == NULL) {
        cout << " p4 adalah pointer null" << endl;
        
    }




}