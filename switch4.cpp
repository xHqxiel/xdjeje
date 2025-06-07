#include <iostream>
using namespace std;

    int lado_a, lado_b, lado_c;
    int ValorTriangulo;
    int main(){
    cout << "Bienvenido al calculador de triangulos, introduce los lados del triangulo (en m)\n";
    cout << "Ingresa el lado 1\n";
    cin >> lado_a;
    cout << "Ingresa el lado 2\n";
    cin >> lado_b;
    cout << "Ingresa el lado 3\n";
    cin >> lado_c;

    if ((lado_a == lado_b && lado_a == lado_c && lado_b == lado_c)){
        ValorTriangulo = 1;
        }else if ((lado_a == lado_b) != lado_c){
            ValorTriangulo = 2;
                }else if((lado_a == lado_c) != lado_b)
                {
                ValorTriangulo = 2;
                    }else if ((lado_b == lado_c) != lado_a)
                {
                    ValorTriangulo = 2;
                }
                else{
                    ValorTriangulo = 3;
                    }
    switch (ValorTriangulo)
    {
    case 1:
        cout << "El triangulo es equilatero\n";
        break;
    case 2:
        cout << "isosceles";
        break;
    case 3:
        cout << "esca";
    default:
        break;
    }
}