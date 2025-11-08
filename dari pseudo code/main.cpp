#include <iostream>

using namespace std;

int main(){
    int num1 = 1;
    int num2 = 0;

    while(num1 < 5) {
        num2 += num1;
        num1 += 2;
    }
    cout << num2 << endl;

    int S = 0;
    for(int i = 1; i <= 6; i++){
        if(i % 2 == 1){

            S += i * 2;
        }else{
            S -= i;
        }
    }
    cout << S << endl;

    int num3 = 0;
    for(int i = 0; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            if((i + j) % 2 == 0){
                num3 += 1;
            }else{
                num3 -= 1;
            }
        }
    }
    cout << num3 << endl;
    return 0;
}