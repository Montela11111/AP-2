#include  <iostream> // header standar c++, canio.h 
#include <conio.h>  //header untuk getche() fan getch()
using namespace std;

int main () 
{
    string nama;
    char kom , jenis_kelamin;
    int nim;
    float ip;

    cout<<"Hello world " << endl;

    cout<<"Masukan nama : ";
    // cin >> nama;
    getline(cin,nama); // Agar karakter spasi bisa terbaca
    
    cout<<"Masukan kom : ";
    cin >> kom;
    
    cout<<"Masukan nim : ";
    cin >> nim;
    
    cout<<"Masukan ip : ";
    cin >> ip;

    cout << "Masukan jenis kelamin : "; // getche
    jenis_kelamin = getche(); //agar karakter langsung tampil, jadi gak perlu tekan enter
    
    cout << "\n " << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    // cout << jenis_kelamin << endl;

    putchar(jenis_kelamin); //untuk menampilkan karakter "jenis kelamin"
  
    getch(); // Karakter yang mau di tampilkan
}