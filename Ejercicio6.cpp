#include <iostream>

using namespace std;

int main(void){

    int dia;

    cout << "Dame un numero entre 1 y 7:\n";

cin >> dia; 

    if (dia == 1) {
        cout << "Es lunes, dia laboral\n";

    }else{

        if(dia == 2){
            cout << "Es martes, dia laboral\n";

        }else{

            if(dia == 3) {
                cout << "Es miercoles, dia laboral\n";

            }else{
                if (dia == 4) {
                    cout << "Es jueves, dia laboral\n";

                }else{
                    if(dia == 5) {
                        cout << "Es viernes, dia laboral\n";

                    }else{
                        if(dia == 6) {
                            cout << "Es sabado, fin de semana\n";

                        }else{
                            cout << "Es domingo, fin de semana\n";
                        }
                    }
                }
            }
        }
    }
    
    return 0;

}