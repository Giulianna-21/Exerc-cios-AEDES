#include <iostream>
using namespace std;
struct Livro{
    string titulo;
    string autor;
    int paginas;
    float preco;
};
int main(){
    Livro livros[5];
    for (int i=0; i<5; i++){
        cout << "Informe o " << i+1 << " livro: " << endl;
        cin.ignore();
        getline(cin,livros[i].titulo);
        cout << "Informe a quantidade de páginas: " << endl;
        cin >> livros[i].paginas;
        cout << "Informe o autor: " << endl;
        cin.ignore();
        getline(cin, livros[i].autor);
        cout << "Informe o valor do livro: " << endl;
        cin >> livros[i].preco;
    }
    int maior = 0;
    for (int i=0; i<5; i++){
        if((livros[i].preco) > maior){
            maior = [i];
        }
    }
    cout << "Livro mais caro: " << 
}