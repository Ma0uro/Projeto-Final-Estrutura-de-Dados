#ifndef PRODUTOSLDE_H_INCLUDED
#define PRODUTOSLDE_H_INCLUDED

Produto* criarProduto(int codigoProduto, const char* nome, double margemLucro); // Cria e retorna um novo produto
Produto* posicaoProduto(Produto* lista, int codigo); // Retorna o n� anterior � posi��o de inser��o ordenada
Produto* inserirProdutoOrdenado(Produto* lista, int codigo, const char* nome, double margemLucro); // Insere um produto na lista duplamente encadeada de forma ordenada
Produto* excluirProduto(Produto* lista, int codigo); // Remove um produto da lista pelo c�digo
void imprimirProdutos(Produto* lista, MateriaPrima *raiz); // Imprime todos os produtos com suas mat�rias-primas e pre�os
double calcularCustoProd(MateriasPLD *materia, MateriaPrima *raiz); // Calcula o custo de produ��o de um produto com base nas mat�rias-primas
double custoDeVenda(double custoDeProd, double margemLucro); // Calcula o pre�o de venda com base no custo e margem de lucro
void produtoSolicitado(int codigoProduto, Produto *produto, MateriaPrima *raiz); // Exibe os dados detalhados de um produto espec�fico
void alterarProduto(Produto *lista, int codigo, const char *novoNome, double novaMargem); // Altera os dados de um produto

#endif // PRODUTOSLDE_H_INCLUDED
