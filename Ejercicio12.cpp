#include <iostream>

using namespace std;

int main(){

    float lado1, lado2, lado3;

    cout << "Ingrese el primer lado del triangulo\n";
    cin >> lado1;
    cout << "Ingrese el segundo lado del triangulo\n";
    cin >> lado2;
    cout << "Ingrese el tercer lado del triangulo\n";
    cin >> lado3;

    if(lado1 == lado2 && lado2 == lado3){
        cout <<"Es un triangulo equilatero";

    }else{
        if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3){
            cout << "ES un triangulo isosceles";

        }else{
            cout << "Es un triangulo escaleno";


        }
    }
return 0;

}