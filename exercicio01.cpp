#include <iostream>
#include <string>

using namespace std;

int main() {
    string nome, curso;
    int idade;

    cout << "Digite a sua idade: ";
    cin >> idade;
    cin.ignore();

    cout << "Digite o seu curso: ";
    getline(cin, curso);

    cout <<"\n---Apresentacao do aluno---" << endl;
    cout <<"Nome: " << nome << endl;
    cout <<"idade:"  << idade << " anos " << endl;
    cout << "Curso:" << curso << endl;

    return 0;
}