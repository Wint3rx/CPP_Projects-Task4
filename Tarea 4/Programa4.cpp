#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n1 = 0, n2 = 0;
    for(n1 = 1; n1 <= 10; ++n1){
    for(n2 = 1; n2 <= 10; ++n2){
        cout<<setw(4)<<n1*n2;
    }
    cout<<endl;
    }
}