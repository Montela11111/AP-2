#include <iostream>
using namespace std;

int main (){
    string kalimat;
    int i ;

    system ("CLS");

    cout << "Masukan kalimat : ";
    getline(cin, kalimat);

    for (i = 0; i < kalimat.length(); i++ ){
        kalimat [i] = toupper(kalimat[i]);

    }
    cout << " KALIMAT DALAM HURUF KAPITAL:  " << kalimat << endl;

}