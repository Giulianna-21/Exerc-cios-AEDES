#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>
#include <locale.h>
using namespace std;
#define N 5

struct Livro{
    int codigo, quant_total, quant_disp;
    string titulo, autor;
};
int main() {
Livro livros[N];
int opcao;
cout<<endl<<endl<<" =============== Cadastro ==================="<<endl;
    for (int i=0; i<N; i++){
        cout << "[Livro " << i+1 << "]" " Código: " << endl;
        cin >> livros[i].codigo;
        cout << "[Livro " << i+1 << "]" " Título: " << endl;
        cin.ignore();
        getline(cin, livros[i].titulo);
        cout << "[Livro " << i+1 << "]" " Autor: " << endl;
        getline(cin, livros[i].autor);
        cout << "[Livro " << i+1 << "]" " Quant. Total de exemplares: " << endl;
        cin >> livros[i].quant_total;
        cout << "[Livro " << i+1 << "]" " Quant. Disponível de exemplares: " << endl;
        cin >> livros[i].quant_disp;
        cout << endl;
    }
    
    while(true){
    cout<<endl<<endl<<" =============== Menu ==================="<<endl;
    cout<<"1. Realizar empréstimo de livro"<<endl;
    cout<<"2. Realizar devolução de livro"<<endl;
    cout<<"3. Consultar dados de um livro"<<endl;
    cout<<"4. Listar todos os livros"<<endl;
    cout<<"5. Encerrar o programa"<<endl;
    cout<<"Digite a opção: ";
    cin >> opcao;
    cout<<endl;
    
        switch (opcao) {
            case 1:
                int cod_infor;
                int quant_desej;
                cout << "Digite código: " << endl;
                cin >> cod_infor;
                cout << "Digite a quantidade que deseja: " << endl;
                cin >> quant_desej;
                for(int i=0; i<N; i++){
                    if (cod_infor == livros[i].codigo){
                        if(quant_desej<= livros[i].quant_disp){
                            livros[i].quant_disp = livros[i].quant_disp - quant_desej;
                            cout << "Empréstimo realizado!";
                        }
                        else if(quant_desej > livros[i].quant_disp){
                            cout << "Quantidade disponível insuficiente" << endl;
                        }
                    }
                    else{
                        cout << "Livro não encontrado" << endl;
                    }
                }
                break;
            case 2:
                int quant_devolv;
                cout << "Digite código: " << endl;
                cin >> cod_infor;
                cout << "Digite a quantidade que deseja devolver: " << endl;
                cin >> quant_devolv;
                for(int i=0; i<N; i++){
                    if (cod_infor == livros[i].codigo){
                        if(quant_devolv + livros[i].quant_disp <= livros[i].quant_total){
                            cout << "Devolução realizada!";
                        }
                        else if(quant_devolv + livros[i].quant_disp > livros[i].quant_total){
                            cout << "Devolução maior que a quantidade disponível" << endl;
                        }
                    }
                    else{
                        cout << "Livro não encontrado" << endl;
                    }
                }
                break;
            case 3:
            cout << "Digite código: " << endl;
            cin >> cod_infor;
            for(int i=0; i<N; i++){
                    if (cod_infor == livros[i].codigo){
                        cout << " Código: " << livros[i].codigo << endl;
                        cout << " Título: " << livros[i].titulo << endl;
                        cout << " Autor: " << livros[i].autor << endl;
                        cout << " Quant. Total de exemplares: " << livros[i].quant_total<< endl;
                        cout << " Quant. Disponível de exemplares: " << livros[i].quant_disp << endl;
                    } 
                    else{
                        cout << "Livro não encontrado" << endl;
                    }

            }
                break;
            case 4: 
                for(int i=0; i<N; i++){
                    cout << "[Livro " << i+1 << "]" "Código: " << livros[i].codigo << endl;
                    cout << "[Livro " << i+1 << "]" "Título: " << livros[i].titulo << endl;
                    cout << "[Livro " << i+1 << "]" "Autor: "<< livros[i].autor << endl;
                    cout << "[Livro " << i+1 << "]" "Quant. Total de exemplares: " << livros[i].quant_total << endl;
                    cout << "[Livro " << i+1 << "]" "Quant. Disponível de exemplares: " << livros[i].quant_disp << endl;
                }
                break;
        }
    }
}
