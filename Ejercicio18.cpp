#include <iostream>

using namespace std;

int main(){

    int usuario, contra1, contra2;

    cout << "Sistema de verificacion de contrasena\n";
    cout << "Ingrese su contrasena numerica:\n";
    cin >> contra1;
    cout << "Ingrese nuevamente su contrasena:\n";
    cin >> contra2;

    if (contra1 == contra2){

        cout << "Acceso permitido\n";

    }else{
        cout << "Acceso denegado, verifique su contrasena.\n";
    }

return 0;

}