#include <iostream>

using namespace std;

int main(){

    int arr[] = {5,8,2,9,1, 10};

    int nilaiMax = arr[0];
    int nilaiMin = arr[0];
    int banyakData = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i < banyakData; i++){
        if(arr[i] > nilaiMax){
            nilaiMax = arr[i];
        }
        
        if(arr[i] < nilaiMin){
            nilaiMin = arr[i];
        }


    }


    cout << "Maksimum : " << nilaiMax << endl;
    cout << "Minimum : " << nilaiMin << endl;

    cout << banyakData<< endl;

    return 0;
}