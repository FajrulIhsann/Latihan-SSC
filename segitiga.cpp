#include <iostream>

using namespace std;

int main(){

    int tinggi;
    cout << "Masukkan Tinggi Segitiga : ";
    cin  >> tinggi;

    for(int i = 1; i <= tinggi; i++){
        for(int j = tinggi; j > i; j--){
            cout << " ";
        }
        for(int k = 0; k < i; k++){
            cout << "*";
        
        }
        for(int l = 1; l < i; l++){
            cout << "*";
            
        }



        for(int m = tinggi; m > i; m--){
            cout << " ";
        }

        for(int m = tinggi; m >= i; m--){
            cout << " ";
        }

        for(int k = 0; k < i; k++){
            cout << "*";
        
        }
        for(int l = 1; l < i; l++){
            cout << "*";
            
        }

    
        

        cout << endl;
    }


    return 0;
}