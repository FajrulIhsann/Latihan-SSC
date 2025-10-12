#include <iostream>

using namespace std;

int main(){
    int arr[6] = {};
    int userIn;


    for(int i = 0; i < 6; i++){
        cout << "Masukkan 6 Angka (" << i + 1 << ") : ";
        cin >> userIn;
        arr[i] = userIn;
    }

    for(int i = 6; i > 0; i--){
        cout << arr[i - 1] << " ";
    }


    return 0;
}