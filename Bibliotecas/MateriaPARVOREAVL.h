#ifndef MATERIAPARVOREAVL_H_INCLUDED
#define MATERIAPARVOREAVL_H_INCLUDED

#include "Estruturas.h"

int maiorValor(int a, int b); // Retorna o maior entre dois valores
int alturaNo(MateriaPrima *no); // Retorna a altura de um n� na �rvore
int fatorBalanceamento(MateriaPrima *no); // Calcula o fator de balanceamento de um n�
MateriaPrima* encontrarMinimo(MateriaPrima* no); // Retorna o n� com menor valor (mais � esquerda)
MateriaPrima* removerNo(MateriaPrima* raiz); // Remove um n� com um ou zero filhos
MateriaPrima* balancearNo(MateriaPrima *no); // Realiza rota��es para balancear o n�
MateriaPrima* excluirMateria(MateriaPrima* raiz, int codigo); // Remove uma mat�ria-prima da �rvore
MateriaPrima* criarNo(int codigoMateria, const char* nome, double preco); // Cria um novo n� de mat�ria-prima
MateriaPrima* rotacaoDireita(MateriaPrima *y); // Realiza rota��o � direita
MateriaPrima* rotacaoEsquerda(MateriaPrima *x); // Realiza rota��o � esquerda
MateriaPrima* inserirMateria(MateriaPrima *raiz, int codigoMateria, const char* nome, double preco); // Insere uma mat�ria-prima na �rvore AVL
void alterarMateriaPrima(MateriaPrima *raiz, int codigo, const char *novoNome, double novoPreco); // Altera nome ou pre�o de uma mat�ria-prima
void imprimirEmOrdem(MateriaPrima *raiz); // Imprime as mat�rias-primas em ordem crescente de c�digo

#endif // MATERIAPARVOREAVL_H_INCLUDED
