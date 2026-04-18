#include <iostream>
#include <string>
#include <array>
using namespace std;


int main() {
    // Array declaration dan initialization
    // 2 cara membuat array

    // Cara 1 : array kosong
    // string nama[5];
    // nama[0] = "Alya";
    // nama[1] = "Parul";
    // nama[2] = "Hana";
    // nama[3] = "Padhil";
    // nama[4] = "Dewi";

    // Cara 2 : array langsung di isi
    // string nama[5] = {"Alya", "Parul","Hana","Padhil","Dewi"};
    // string nama[] = {"Alya", "Parul","Hana","Padhil","Dewi"};


    //Menampilkan data dalam array
    // cout << nama[0]<< endl;
    // cout << nama[4]<< endl;
    

    // Menggunakan Looping Ascending
    // for(int i = 0 ; i  < 5 ; i ++){
    //     cout << nama[i] << endl;
    // }


    // Descending
    // for (int i = 4; i>= 0; i--){
    //cout << nama[i] << endl;
    //}


    // Multidimensional Array
    // 1 2 3 
    // 4 5 6


    // int matrix[2][3] = {{1,2,3}, {4,5,6}};
    // for(int i = 0; i<2; i++) { // Baris
    //     for(int j= 0; j<3 ; j++)} {
    //         cout << matrix[i] [j] << " " ;

    //     }

    //     cout << endl;

        //}

     
    // String (Array of char)
    // string nama = "Alya";
    // cout << nama[0] << endl;
    // cout << nama[2] << endl;

    // cout << nama.length(); // Menghitung jumlah karakter

    // string s1 = "Hello";
    // string s2 = "World";

    // 1. s1 = s2
    // s1 = s2
    // cout << "s1 sekarang = " << s1 << endl;

    // // 2. s1 = s1 + s2
    // s1 = "Helo"; // reset nilai
    // cout << "Hasil Gabungan = " << s1 + s2 << endl;

    // // 3. s1.lenght()
    // cout << s1.lenght() << endl;//5
    // cout << (s1 + s2).lenght() endl; //10

    // // 4. s1.substr(n,m) n itu mulai dari brp, m itu panjang brp
    // cout << s1.substr(2,3) << endl;


    // Operator sizeof
    // int angka = 10;
    // cout << sizeof(angka);

    // int nilai[] = {10,20,30,40,50};
    // cout << sizeof(nilai);


    // Array Library
    // Misal Array biasa : float nilai[5]

    // array<float,5> nilai = {87.5 , 90 , 100, 95.7 , 78.3};
    // cout << "Nilai : ";

    // for (int i = 0; i < nilai.size(); i++){
    //     cout << nilai[i]<< " ";
    // }






}