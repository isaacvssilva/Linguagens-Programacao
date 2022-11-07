/*
 * =====================================================================================
 *
 *       Filename:  livro_comedia.cpp
 *
 *    Description:  -
 *
 *        Version:  1.0
 *        Created:  25/10/2022 12:32:05
 *       Revision:  none
 *       Compiler:  -
 *
 *         Author:  Isaac Vinicius, isaacvinicius2121@alu.ufc.br
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#include <bits/stdc++.h>
#include "../inc/livro_comedia.hpp"

LivroComedia::LivroComedia(){
    // std::cout << "Classe LivroComedia criada!" << "\n";
}

LivroComedia::~LivroComedia(){
    // std::cout << "Classe LivroComedia destruida!" << "\n";
}

LivroComedia::LivroComedia(std::string nome, double valor, int quantidade, int id_livro, std::string caracteristica){
    this->nome = nome;
    this->valor = valor;
    this->quantidade = quantidade;
    this->id_livro = id_livro;
    this->caracteristica = caracteristica;
}

std::string LivroComedia::getNome(){
    return nome;
}

double LivroComedia::getValor(){
    return valor;
}

int LivroComedia::getQuantidade(){
    return quantidade;
}

int LivroComedia::getId_livro(){
    return id_livro;
}

std::string LivroComedia::getCaracteristica(){
    return caracteristica;
}

void LivroComedia::setNome(std::string nome){
    this->nome = nome;
}

void LivroComedia::setValor(double valor){
    this->valor = valor;
}

void LivroComedia::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void LivroComedia::setCaracteristica(std::string caracteristica){
    this->caracteristica = caracteristica;
}

void LivroComedia::print(){
    std::cout << "Nome do Livro: " << getNome() 
    << "\nValor: " << getValor() 
    << "\nQuantidade: " << getQuantidade()
    << "\nID: " << getId_livro()
    << "\nCaracteristica: " << getCaracteristica();
}