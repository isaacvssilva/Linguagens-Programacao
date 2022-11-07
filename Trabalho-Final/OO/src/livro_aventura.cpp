/*
 * =====================================================================================
 *
 *       Filename:  livro_aventura.cpp
 *
 *    Description:  -
 *
 *        Version:  1.0
 *        Created:  25/10/2022 12:30:10
 *       Revision:  none
 *       Compiler:  -
 *
 *         Author:  Isaac Vinicius, isaacvinicius2121@alu.ufc.br
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#include <bits/stdc++.h>
#include "../inc/livro_aventura.hpp"

LivroAventura::LivroAventura(){
    // std::cout << "Classe LivroAventura criada!" << "\n";
}

LivroAventura::~LivroAventura(){
    // std::cout << "Classe LivroAventura destruida!" << "\n";
}

LivroAventura::LivroAventura(std::string nome, double valor, int quantidade, int id_livro, std::string caracteristica){
    this->nome = nome;
    this->valor = valor;
    this->quantidade = quantidade;
    this->id_livro = id_livro;
    this->caracteristica = caracteristica;
}

std::string LivroAventura::getNome(){
    return nome;
}

double LivroAventura::getValor(){
    return valor;
}

int LivroAventura::getQuantidade(){
    return quantidade;
}

int LivroAventura::getId_livro(){
    return id_livro;
}

std::string LivroAventura::getCaracteristica(){
    return caracteristica;
}

void LivroAventura::setNome(std::string nome){
    this->nome = nome;
}

void LivroAventura::setValor(double valor){
    this->valor = valor;
}

void LivroAventura::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void LivroAventura::setCaracteristica(std::string caracteristica){
    this->caracteristica = caracteristica;
}

void LivroAventura::print(){
    std::cout << "Nome do Livro: " << getNome() 
    << "\nValor: " << getValor() 
    << "\nQuantidade: " << getQuantidade()
    << "\nID: " << getId_livro()
    << "\nCaracteristica: " << getCaracteristica();
}