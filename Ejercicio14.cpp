#include <iostream>

using namespace std;

int main (){
 
    int ano;

    cout << "Esta pagina te ayuda a determinar si el ano es bisiesto.\n";
    cout << "Ingrese el ano:\n";
    cin >> ano;

    if(ano % 4 == 0 ){
        cout << "Tu ano es bisiesto\n";

    }else{
        cout << "Tu ano no es bisiesto\n";
    }

    return 0;

}