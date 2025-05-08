#include <iostream>

using namespace std;

int main(){

    float peso;

    cout << "Cuanto pesa tu paquete?\n";
    cin >> peso;

    if(peso >=0 && peso <=5){
        cout << "Precio de envio $5";

    }else{
        if(peso >5 && peso <= 10){
            cout << "Precio de envio $10";
        }else{
            if(peso >10){
                cout << "Precio de envio $15";
            }
        }
    }

return 0;

}