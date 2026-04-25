#include <iostream>
using namespace std;

void sapa(string nama) { // nama adalah parameter formal
    cout << "Halo" << nama << "Selamat datang di ap 2" << endl;

    
}

int main () {
    string namapengguna = "Alya";

    sapa(namapengguna); // namapengguna adalah parameter aktual

    return 0;

}
