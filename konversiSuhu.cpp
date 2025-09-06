#include <iostream>

using namespace std;

int main(){
    int kelvin;

    cout << "Masukkan Suhu Dalam Kelvin : ";
    cin >> kelvin;

    int reamur = (4 * (kelvin-273)) / 5;

    cout << "Suhu dalam reamur adalah : " << reamur << endl;

    if(reamur < 40){
        cout << "Dingin";
    }else{
        cout << "Panas";
    }

    
}