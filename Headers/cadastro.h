#ifndef CADASTRO_H_INCLUDED
#define CADASTRO_H_INCLUDED
using namespace std;

#include <string>

enum Sexo {
    MASCULINO,
    FEMININO,
    OUTRO
};

struct Pessoa {
    string nome;
    int idade;
    Sexo sexo;
};

bool cadastrarPessoa(Pessoa vetor[], int tamanho, string nome, int idade, Sexo sexo, int* proximaPosicao);
void listarPessoas(Pessoa vetor[], int tamanho);

#endif // CADASTRO_H_INCLUDED
