/*
 * =====================================================================================
 *
 *       Filename:  livraria.hpp
 *
 *    Description:  -
 *
 *        Version:  1.0
 *        Created:  05/11/2022 10:59:19
 *       Revision:  none
 *       Compiler:  -
 *
 *         Author:  Isaac Vinicius, isaacvinicius2121@alu.ufc.br
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#ifndef LIVRARIA_H
#define LIVRARIA_H
#include "livro.hpp"

/*Criando classe Livraria*/
class Livraria{
private:
    std::vector<Livro> livrosEstoque = std::vector<Livro>(20);
	double saldo;
public:

    /*Construtor da classe Livraria vazio*/
    Livraria();
    /*Destrutor da classe Livraria*/
    ~Livraria();

    /*Construtor da classe Livraria com parametros*/
    Livraria(std::vector<Livro> livrosEstoque, double saldo);

    /*Metodos getter para a classe Livraria*/
    std::vector<Livro> getLivrosEstoque();
    double getSaldo();

    /*Metodos setter para a classe Livraria*/
    void setLivrosEstoque(std::vector<Livro> livrosEstoque);
    void setSaldo(double saldo);

    /*funcoes auxiliares*/
    void consultaQuantidade();
    bool efetuarCompra(int id, int qtd);
    bool efetuarVenda(int id, int qtd);
    void print();
};

#endif
/*****************************END OF FILE**************************************/