#include <iostream>
using namespace std;

string variabelglobal = "Ilmu" ;


void namavariabel () {
    string variabellokal = "Komputer" ; // Contoh variabel lokal    

    // Coba Akses 1 

    cout << variabellokal << endl;

    // Coba Akses 2
    cout << variabelglobal << endl;
}

int main () {
    namavariabel ();

    cout << variabelglobal << endl;
    

    
}