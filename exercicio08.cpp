#include <iostream>

using namespace std;

int main(){
    float horas;
    float minutos, segundos; 

    cout << "Digite a quantidade de horas: ";
    cin >> horas;

    minutos = horas * 60.0;
    segundos = minutos * 60.0;

    cout << "\n--- Conversao de Tempo ---\n";
    cout << "Horas: " << horas << " h " << endl;
    cout << "Minutos: " << minutos << " min " << endl;
    cout << "Segundos: " << segundos << " seg " << endl;

    return 0;
}