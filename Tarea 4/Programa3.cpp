#include <iostream>
using namespace std;

int main()
{
    int n1, m2 = 0, m3 = 0, m5 = 0;
    cout<<"Ingrese un numero: ";
    cin>>n1;

    while(n1 != 9999){

    if(n1 % 2 == 0){
        m2++;
    }

    if(n1 % 3 == 0){
        m3++;
    }

    if(n1 % 5 == 0){
        m5++;
    }
    
        cout<<"Ingrese un numero: ";
        cin>>n1;
}

cout<<"Multiplos de 2: "<<m2<<endl;
cout<<"Multiplos de 3: "<<m3<<endl;
cout<<"Multiplos de 5: "<<m5<<endl;

return 0;
}