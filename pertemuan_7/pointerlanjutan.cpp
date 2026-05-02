#include <iostream>
using namespace std;

// fungsi untuk pointer sebagai parameter
void ubahNilai(int *p) { // p menerima alamat x
    *p = 20;    // *p 20 --> ubah isi alamat


}

int main(){
    system("CLS");

    // 1. Pointer dalam pointer
    cout << "=== Pointer dalam pointer=== " << endl;

    int a = 64; // var biasa
    int *p = &a; // pointer ke a   
    int **pp = &p; //pointer ke pointer p

    cout << "Nilai a : " << a << endl; // 10
    cout << "Nilai *p : " <<*p << endl; // Isi alamat a = 64
    cout << "Nilai **p : " << **pp << endl; // isi pointer p

    // 2. Pointer dalam array 
    cout << "=== Pointer dalam array=== " << endl;
    int array[3] = {1,2,3};
    int *ptr = array;

    cout << "Elemen 1 : " << *ptr << endl;
    cout << "Elemen 2 : " << (*ptr + 1) << endl;
    cout << "Elemen 3 : " <<(*ptr + 2) << endl;


    // 3. Pointer dalam string
    cout << "=== Pointer dalam string=== " << endl;

    char *organisasi = "Ilmu Komputer Lab Center" ;
    cout << " Awal : " << organisasi << endl;

    organisasi += 5; // geser pointer
    cout << "Geser : " << organisasi << endl; // setelah +5 --> mulai dari k


    // 4. Pointer sebagai parameter
    cout << "=== Pointer sebagai parameter=== " << endl;
    int x = 5 ; 
    cout << "Sebelum : " << x << endl;
    
    ubahNilai(&x); 
    cout << "Sesudah : " << x << endl;
    




    




}