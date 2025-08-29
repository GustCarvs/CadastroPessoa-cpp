#include <iostream>
#include <limits>
#include "cadastro.h"
using namespace std;
#define MAX 10
int main() {
    Pessoa pessoas[MAX];
    int proximaPosicao = 0;
    bool sucesso;

    int opcao;
    do {
        cout << "\n===== Menu =====\n";
        cout << "1) Cadastrar pessoa\n";
        cout << "2) Listar pessoas\n";
        cout << "3) Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;

        if (opcao == 1) {
            string nome;
            int idade;
            int sexoInput;

            cout << "Digite o nome: ";
            getline(cin, nome);

            cout << "Digite a idade: ";
            cin >> idade;

            cout << "Digite o sexo (0 = Masculino, 1 = Feminino, 2 = Outro): ";
            cin >> sexoInput;

            if (sexoInput < 0 || sexoInput > 2) {
                cout << "Sexo inválido! Cadastro cancelado.\n";
                continue;
            }

            sucesso = cadastrarPessoa(pessoas, MAX, nome, idade, static_cast<Sexo>(sexoInput), &proximaPosicao);
            if (sucesso)
                cout << "Pessoa cadastrada com sucesso!\n";
        }
        else if (opcao == 2) {
            if (proximaPosicao == 0) {
                cout << "Nenhuma pessoa cadastrada ainda.\n";
            } else {
                listarPessoas(pessoas, proximaPosicao);
            }
        }
        else if (opcao != 3) {
            cout << "Opcao invalida! Tente novamente.\n";
        }

    } while (opcao != 3);

    cout << "Programa encerrado.\n";
    return 0;
}
