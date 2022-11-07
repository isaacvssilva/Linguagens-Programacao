/*
 * =====================================================================================
 *
 *       Filename:  livro_drama.hpp
 *
 *    Description:  -
 *
 *        Version:  1.0
 *        Created:  24/10/2022 09:49:36
 *       Revision:  none
 *       Compiler:  -
 *
 *         Author:  Isaac Vinicius, isaacvinicius2121@alu.ufc.br
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#ifndef LIVRODRAMA_H
#define LIVRODRAMA_H
#include "livro.hpp"
#include <bits/stdc++.h>

/*Criando classe LivroDrama como derivada da classe Livro*/
class LivroDrama : public Livro{
private:
    std::vector<std::shared_ptr<LivroDrama>> livrosCdrama;
public:
    /*Construtor da classe LivroDrama vazio*/
    LivroDrama();
    /*Destrutor da classe LivroDrama*/
    ~LivroDrama();

    /*Construtor da classe LivroDrama com parametros*/
    LivroDrama(std::string nome, double valor, int quantidade, int id_livro, std::string caracteristica);

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