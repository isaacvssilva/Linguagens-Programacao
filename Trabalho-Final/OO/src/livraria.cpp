/*
 * =====================================================================================
 *
 *       Filename:  livraria.cpp
 *
 *    Description:  -
 *
 *        Version:  1.0
 *        Created:  05/11/2022 15:07:22
 *       Revision:  none
 *       Compiler:  -
 *
 *         Author:  Isaac Vinicius, isaacvinicius2121@alu.ufc.br
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#include <bits/stdc++.h>
#include "../inc/livraria.hpp"

Livraria::Livraria(){
    // std::cout << "Classe Livraria criada!" << "\n";
}

Livraria::~Livraria(){
    // std::cout << "Classe Livraria destruida!" << "\n";
}

Livraria::Livraria(std::vector<Livro> livrosEstoque, double saldo){
    this->livrosEstoque = livrosEstoque;
    this->saldo = saldo;
}

bool Livraria::efetuarCompra(int id, int qtd){
    for(Livro livros : livrosEstoque){
        if(livros.getId_livro() == id){
            if(livros.getValor()*qtd <= saldo){
                saldo -= livros.getValor()*qtd;
                livros.setQuantidade(livros.getQuantidade()+qtd);
                std::cout << "saldo pos compra: " << saldo << "$" << "\n";
                return true;
            }else{
                std::cout << ("Error: saldo insuficiente!\n");
            }
        }
    }
    return 0;
}

bool Livraria::efetuarVenda(int id, int qtd){
    for(Livro livros : livrosEstoque){
        if(livros.getId_livro() == id){
            if(livros.getQuantidade() >= qtd){
                saldo += livros.getValor()*qtd;
                livros.setQuantidade(livros.getQuantidade()-qtd);
                std::cout << "saldo pos venda: " << saldo << "$" << "\n";
                return true;
            }else{
                std::cout << ("Error: quantidade excedida!\n");
            }
        }
    }
    return 0;
}

std::vector<Livro>Livraria::getLivrosEstoque(){
    return livrosEstoque;
}

void Livraria::setLivrosEstoque(std::vector<Livro> livrosEstoque){
    this->livrosEstoque = livrosEstoque;
}

double Livraria::getSaldo(){
    return saldo;
}

void Livraria::setSaldo(double saldo){
    this->saldo = saldo;
}