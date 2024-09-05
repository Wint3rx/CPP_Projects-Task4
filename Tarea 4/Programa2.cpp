#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    cout<<"Ingrese el primer numero: ";
    cin>>n1;
    cout<<"Ingrese el segundo numero: ";
    cin>>n2;
    cout<<"Ingrese el tercer numero: ";
    cin>>n3;

     while(!(n3 > n1 && n3 > n2 && n3 <= n1 + n2)){
        cout<<"Ingrese el tercer numero: ";
            cin>>n3;
     }

        return 0;
        
}