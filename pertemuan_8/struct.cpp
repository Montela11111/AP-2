#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Alamat {
    string jalan, kota;
    int kode_pos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main() {
    system("CLS");

    Mahasiswa mhs1;

    // mhs1.alamat.jalan = "Jalan Jamin Ginting";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kode_pos = 20155;

    // cout << "Alamat : " << mhs1.alamat.jalan
    //      << ", Kota : " << mhs1.alamat.kota
    //      << ", Kode Pos : " << mhs1.alamat.kode_pos << endl;

    vector<Mahasiswa> mahasiswa;

    int n;

    cout << "Masukan banyak mahasiswa: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "\nMahasiswa " << i + 1 << endl;

        cin.get();

        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout << "Masukkan ipk : ";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

   for (int i = 0; i < n; i++) {
    cout << "Mahasiswa " << i + 1 << endl;
    cout << "Nama : " << mahasiswa[i].nama << endl;
    cout << "Umur : " << mahasiswa[i].umur << endl;
    cout << "IPK : " << mahasiswa[i].ipk << endl;
}
    return 0;
}