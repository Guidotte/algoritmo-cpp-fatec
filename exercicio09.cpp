#include <iostream>

using namespace std;

int main() {
    float distancia, litros, consumoMedio;

    cout << "Digite a distancia percorrida ( em km ): ";
    cin >> distancia;

    cout << "Digite a quantidade de litros consumidos: ";
    cin >> litros;

    if (litros > 0) {
        consumoMedio = distancia / litros;

        cout << "\n--- Consumo de Combustivel ---\n";
        cout << "Distancia Percorrida: " << distancia << " km " << endl;
        cout << "Litros Consumidos: " << litros << " L " << endl;
        cout << "Consumo Medio: " << consumoMedio << "km/l" << endl;
         } else { 
            cout << "\nA quantidade de litros deve ser meio que zero!" << endl;
             }
             
             return 0;
             
            }
    
