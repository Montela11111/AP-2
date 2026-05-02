#include <iostream>
using namespace std;

int main () {
    system("CLS");

    // Pointer Deklarasi
    int number = 35;
    int *pointer_number = &number;

    cout << "Isi var number = " << number << endl;
    cout << "Alamat dari var number " << &number << endl;
    cout << "Isi var pointer number " << pointer_number << endl;
    cout << "isi var yang ditunjuk oleh pointer_number " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number " << &pointer_number << endl;


}

