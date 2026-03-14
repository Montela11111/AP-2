#include <iostream>
using namespace std;

int main (){
    float bb, tb, bmi;

    cout << "Masukan bb anda : ";
    cin >> bb;

    cout << "Masukan tb anda : ";
    cin >> tb;

    bmi = bb / (tb * tb);

    cout << "BMI : " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Kategori berat badan : Kurang";
    }
    else if (bmi >= 18.5 && bmi < 25) {
        cout << "Kategori berat badan : Normal";
    }
    else if (bmi >= 25 && bmi < 30) {
        cout << "Kategori berat badan : Berat badan berlebih";
    }
    else {
        cout << "Kategori berat badan : Obesitas";
    }

    return 0;
}