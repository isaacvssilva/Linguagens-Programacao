/*
 * =====================================================================================
 *
 *       Filename:  livro_comedia.hpp
 *
 *    Description:  -
 *
 *        Version:  1.0
 *        Created:  25/10/2022 12:27:00
 *       Revision:  none
 *       Compiler:  -
 *
 *         Author:  Isaac Vinicius, isaacvinicius2121@alu.ufc.br
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#ifndef LIVROCOMEDIA_H
#define LIVROCOMEDIA_H

#include "livro.hpp"

/*Criando classe LivroComedia como derivada da classe Livro*/
class LivroComedia : public Livro{

public:
    /*Construtor da classe LivroComedia vazio*/
    LivroComedia();
    /*Destrutor da classe LivroComedia*/
    ~LivroComedia();

    /*Construtor da classe LivroComedia com parametros*/
    LivroComedia(std::string nome, double valor, int quantidade, int id_livro, std::string caracteristica);

    /*Metodos getter para a classe livro_drama*/
    std::string getNome();
    double getValor();
    int getQuantidade();
    int getId_livro();
    std::string getCaracteristica();

    /*Metodos setter para a classe livro_drama*/
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