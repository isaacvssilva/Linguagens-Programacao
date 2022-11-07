/*
 * =====================================================================================
 *
 *       Filename:  livro_drama.cpp
 *
 *    Description:  -
 *
 *        Version:  1.0
 *        Created:  24/10/2022 11:29:46
 *       Revision:  none
 *       Compiler:  -
 *
 *         Author:  Isaac Vinicius, isaacvinicius2121@alu.ufc.br
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#include <bits/stdc++.h>
#include "../inc/livro_drama.hpp"

LivroDrama::LivroDrama(){
    // std::cout << "Classe LivroDrama criada!" << "\n";
}

LivroDrama::~LivroDrama(){
    // std::cout << "Classe LivroDrama destruida!" << "\n";
}

LivroDrama::LivroDrama(std::string nome, double valor, int quantidade, int id_livro, std::string caracteristica){
    this->nome = nome;
    this->valor = valor;
    this->quantidade = quantidade;
    this->id_livro = id_livro;
    this->caracteristica = caracteristica;
}

std::string LivroDrama::getNome(){
    return nome;
}

double LivroDrama::getValor(){
    return valor;
}

int LivroDrama::getQuantidade(){
    return quantidade;
}

int LivroDrama::getId_livro(){
    return id_livro;
}

std::string LivroDrama::getCaracteristica(){
    return caracteristica;
}

void LivroDrama::setNome(std::string nome){
    this->nome = nome;
}

void LivroDrama::setValor(double valor){
    this->valor = valor;
}

void LivroDrama::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void LivroDrama::setCaracteristica(std::string caracteristica){
    this->caracteristica = caracteristica;
}

void LivroDrama::print(){
    std::cout << "Nome do Livro: " << getNome() 
    << "\nValor: " << getValor() 
    << "\nQuantidade: " << getQuantidade()
    << "\nID: " << getId_livro()
    << "\nCaracteristica: " << getCaracteristica();
}