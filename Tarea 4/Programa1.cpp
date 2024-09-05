#include <iostream>
using namespace std;

int main(){
    int num, div, suma;

    for (num=1; num<=10000; num++){
        suma = 0;

        for (div=1; div<=num/2; div++){
            if (num%div==0){
            suma += div;
            }
          
        }

        if (suma==num){
            cout<<num<<" Es un numero perfecto."<<endl;
        }
    }
    return 0;
}