#include <iostream>

using namespace std;

int main(){
    int angka1;
    int angka2;
    int hasil;
    char inputOperator;

    cout << "Pilih Operator (+, -, *, /)" << endl;
    cin >> inputOperator;

    cout << "Masukkan angka pertama : ";
    cin >> angka1;
    cout << "Masukkan angka kedua : ";
    cin >> angka2;

    switch(inputOperator){
        case '+':
            hasil = angka1 + angka2;
            break;
        case '-':
            hasil = angka1 - angka2;
            break;
        case '*':
            hasil = angka1 * angka2;
            break;
        case '/':
            hasil = angka1 / angka2;
            break;
    }

    cout << "Hasilnya adalah : " << hasil;


    return 0;
}