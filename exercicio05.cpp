#include <iostream>

using namespace std;

int main(){
    float nota1, nota2, nota3, media;

    cout << "Digite a primeira nota: ";
    cin >> nota1;

    cout << "Digite a segunda nota: ";
    cin >> nota2;

    cout << "Digite a terceira nota: ";
    cin >> nota3;

    media = (nota1 + nota2 + nota3) / 3.0;

    cout << "\n---Boletim do Aluno ---\n ";
    cout << "Nota 1: " << nota1 << endl;
    cout << "Nota 2: " << nota2 << endl; 
    cout << "Nota 3: " << nota3 << endl;
    cout << "Media Final: " << media << endl;

    return 0;
}