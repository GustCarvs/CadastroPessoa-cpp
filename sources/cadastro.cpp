#include <iostream>
#include "cadastro.h"
using namespace std;

bool cadastrarPessoa(Pessoa vetor[], int tamanho, string nome, int idade, Sexo sexo, int* proximaPosicao) {
    if (*proximaPosicao >= tamanho) {
        cout << "Erro: O sistema está cheio. Não é possível cadastrar mais pessoas." << endl;
        return false;
    }

    vetor[*proximaPosicao].nome = nome;
    vetor[*proximaPosicao].idade = idade;
    vetor[*proximaPosicao].sexo = sexo;
    (*proximaPosicao)++;

    return true;
}

void listarPessoas(Pessoa vetor[], int tamanho) {
    cout << "\n===== Lista de Pessoas =====\n";
    for (int i = 0; i < tamanho; i++) {
        cout << "Pessoa " << i + 1 << ":\n";
        cout << "Nome: " << vetor[i].nome << "\n";
        cout << "Idade: " << vetor[i].idade << "\n";
        cout << "Sexo: ";
        switch (vetor[i].sexo) {
            case MASCULINO: cout << "Masculino"; break;
            case FEMININO: cout << "Feminino"; break;
            case OUTRO: cout << "Outro"; break;
        }
        cout << "\n\n";
    }
}
