#include <iostream>

using namespace std;

int main() {

    string Usuario_correcto = "admin";
    string contrasena_correcta = "1234";

    string usuario, contrasena;

    cout << "Sistema de inicio de sesion\n";

    cout << "Ingrese su usuario:\n";

    cin >> usuario;

    cout << "Ingrese su contrasena:\n";

    cin >> contrasena;

    if(usuario == Usuario_correcto && contrasena == contrasena_correcta){
        cout << "Acceso permitido";

    }else{

        cout << "Acceso denegado";

    }
    
    return 0;

}