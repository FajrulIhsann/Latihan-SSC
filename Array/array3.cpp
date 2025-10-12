#include <iostream>

using namespace std;

int main(){
    int arr[] = {1, 2, 3, 2, 4, 2, 5, 6, 2 ,7};

    int userIn;
    int frekuensi = 0;

    cout << "Masukkan angka yang dicari : ";
    cin >> userIn;

    for(int i = 0; i < 10; i++){
        if(arr[i] == userIn){
            frekuensi += 1;
        }
    }

    cout << "Angka " << userIn << " muncul sebanyak " << frekuensi << " kali" << endl;


    return 0;
}