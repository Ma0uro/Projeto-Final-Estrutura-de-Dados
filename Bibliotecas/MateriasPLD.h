#ifndef MATERIASPLD_H_INCLUDED
#define MATERIASPLD_H_INCLUDED

#include "Estruturas.h"

MateriasPLD* criarMateriaNaLista(int codigo, int quantidade); // Cria um novo n� de mat�ria-prima na lista do produto
MateriasPLD* posicaoMateriaPLD(MateriasPLD* lista, int codigo); // Encontra a posi��o de inser��o na lista ordenada
MateriasPLD* inserirMateriaOrdenado(MateriasPLD* lista, int codigo, int quantidade); // Insere mat�ria-prima ordenadamente na lista
MateriasPLD* excluirMateriaPLD(MateriasPLD* lista, int codigo); // Remove uma mat�ria-prima da lista de um produto
void alterarQuantidadeMateriaProduto(Produto *lista, int codigoProduto, int codigoMateria, int novaQuantidade); // Altera a quantidade de uma mat�ria-prima de um produto
void adicionarOuSubstituirMateriaProduto(Produto *lista, int codigoProduto, int codigoMateria, int quantidade); // Adiciona ou substitui mat�ria-prima em um produto
void removerMateriaDoProduto(Produto *lista, int codigoProduto, int codigoMateria); // Remove mat�ria-prima de um produto
void imprimirMateriasPLD(MateriasPLD* lista, MateriaPrima *raiz); // Imprime a lista de mat�rias-primas de um produto

#endif // MATERIASPLD_H_INCLUDED
