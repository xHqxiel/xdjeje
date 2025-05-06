#include <iostream>
using namespace std;
int main(){
    float calif;

    cout << "Ingrese su nota";
    cin >> calif;
    if(calif >= 0 && calif < 6){
        cout << "Reprobaste";
    }
    else if (calif >= 6 && calif <= 10){
        cout << "Felicades, aporbaste";
    }
    else {
        cout << "Pone una nota real";
    }
    return 0;
}