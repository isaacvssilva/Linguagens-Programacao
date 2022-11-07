/*
 * =====================================================================================
 *
 *       Filename:  livro.hpp
 *
 *    Description:  -
 *
 *        Version:  1.0
 *        Created:  24/10/2022 09:49:18
 *       Revision:  none
 *       Compiler:  -
 *
 *         Author:  Isaac Vinicius, isaacvinicius2121@alu.ufc.br
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#ifndef LIVRO_H
#define LIVRO_H
#include <bits/stdc++.h>

/*Classe livro vai ser considerada como a classe Pai*/
class Livro{
protected:
    std::string nome;
    double valor;
    int quantidade;
    int id_livro;
    std::string caracteristica;

public:
    /*Construtor da classe Livro vazio*/
    Livro();
    /*Destrutor da classe Livro*/
    ~Livro();
    Livro(std::string nome, double valor, int quantidade, int id_livro, std::string caracteristica);

    /*Metodos getter para a classe livro*/
    std::string getNome();
    double getValor();
    int getQuantidade();
    int getId_livro();
    std::string getCaracteristica();

    /*Metodos setter para a classe livro_aventura*/
    void setNome(std::string nome);
    void setValor(double valor);
    void setId_livro(int id_livro);
    void setQuantidade(int quantidade);
    void setCaracteristica(std::string caracteristica);

    /*funcoes auxiliares*/
    void print();
};
#endif
/*****************************END OF FILE**************************************/