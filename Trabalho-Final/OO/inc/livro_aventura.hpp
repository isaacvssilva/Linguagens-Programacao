/*
 * =====================================================================================
 *
 *       Filename:  livro_aventura.hpp
 *
 *    Description:  -
 *
 *        Version:  1.0
 *        Created:  25/10/2022 12:23:52
 *       Revision:  none
 *       Compiler:  -
 *
 *         Author:  Isaac Vinicius, isaacvinicius2121@alu.ufc.br
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#ifndef LIVROAVENTURA_H
#define LIVROAVENTURA_H
#include "livro.hpp"

/*Criando classe LivroAventura como derivada da classe Livro*/
class LivroAventura : public Livro{

public:
    /*Construtor da classe LivroAventura vazio*/
    LivroAventura();
    /*Destrutor da classe LivroAventura*/
    ~LivroAventura();

    /*Construtor da classe LivroAventura com parametros*/
    LivroAventura(std::string nome, double valor, int quantidade, int id_livro, std::string caracteristica);

    /*Metodos getter para a classe livro_aventura*/
    std::string getNome();
    double getValor();
    int getQuantidade();
    int getId_livro();
    std::string getCaracteristica();

    /*Metodos setter para a classe livro_aventura*/
    void setNome(std::string nome);
    void setValor(double valor);
    void setQuantidade(int quantidade);
    void setId_livro(int id_livro);
    void setCaracteristica(std::string caracteristica);

    /*funcoes auxiliares*/
    void print();
};

#endif
/*****************************END OF FILE**************************************/