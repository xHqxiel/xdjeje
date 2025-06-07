#include <iostream>
using namespace std;

int main (){
    int sueldo;
    int impuesto;
    int pago_final;
    cout << "Introduce tu sueldo\n";
    cin >> sueldo;

    if (sueldo > 2000)
    {
        impuesto = sueldo * 0.15;
        pago_final = sueldo - impuesto;
        cout << "Su pago final es de " << pago_final << "$\n";
    }else{
        impuesto = sueldo * 0.10;
        pago_final = sueldo - impuesto;
    }
    return 0;

}