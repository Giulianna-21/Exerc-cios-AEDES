#include <iostream>
using namespace std;
struct Pessoa{
    string nome;
    string cpf;
};
struct Aluno {
    Pessoa pessoa;
    string matricula;
    string curso;
};
int main(){
    Aluno alu;
    cout << "Digite o nome do aluno: ";
    getline (cin, alu.pessoa.nome);
    cout << "Digite a matrícula do aluno: ";
    getline (cin, alu.matricula);
    cout << "Digite o cpf do aluno: ";
    getline (cin, alu.pessoa.cpf);
    cout << "Digite o curso do aluno: ";
    getline (cin, alu.curso);

    cout << endl;
    cout << "Nome do aluno: " << alu.pessoa.nome << endl;
    cout << "Matrícula do aluno: " << alu.matricula << endl;
    cout << "CPF do aluno: " << alu.pessoa.cpf << endl;
    cout << "Curso do aluno: " << alu.curso << endl;
}