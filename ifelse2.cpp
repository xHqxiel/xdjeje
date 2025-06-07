#include <iostream>
using namespace std;

int main(){
    int monto;
    int descuento;
    int pago_final;
    cout << "Ingrese el valor total de su compra\n";
    cin >> monto;

    if (monto > 100)
    {
        descuento = monto * 0.10;
        pago_final = monto - descuento;
        cout << "El valor de su compra es " << pago_final << "$\n";
    }else{
        cout <<"El valor de su compra es " << monto << "\n";
        cout << "Su descuento es de 0$\n";
    }
    return 0;
}

