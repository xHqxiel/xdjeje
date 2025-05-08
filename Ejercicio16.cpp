#include <iostream>

using namespace std;

int main(){

    string usuario_correcto = "admin";
    string contrasena_correcta = "1234";

    string usuario, contrasena;

    cout << "Sistema de autenticacion\n";
    cout << "Ingrese usuario:\n";
    cin >> usuario;
    cout << "Ingresa contrasena:\n";
    cin >> contrasena;

    if(usuario == usuario_correcto && contrasena == contrasena_correcta){
        cout <<"Acceso permitido\n";

    }else{
        cout << "Acesso denegado\n";
        cout << "Ingrese nuevamente usuario y contrasena:\n";
        cout << "Ingrese usuario:\n";
        cin >> usuario;
        cout << "Ingrese contrasena:\n";
        cin >> contrasena;
        if(usuario == usuario_correcto && contrasena == contrasena_correcta){
            cout <<"Acceso permitido\n";
        }else{

        cout << "Acesso denegado\n";
        cout << "Ingrese nuevamente usuario y contrasena:\n";
        cout << "Ingrese usuario:\n";
        cin >> usuario;
        cout << "Ingrese contrasena:\n";
        cin >> contrasena;
        if(usuario == usuario_correcto && contrasena == contrasena_correcta){
            cout <<"Acceso permitido\n";

        }else{
            cout << "Acceso denegado\n";
        }



    }

}

return 0;

}