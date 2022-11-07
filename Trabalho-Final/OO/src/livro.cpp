/*
 * =====================================================================================
 *
 *       Filename:  livro.cpp
 *
 *    Description:  -
 *
 *        Version:  1.0
 *        Created:  24/10/2022 10:20:39
 *       Revision:  none
 *       Compiler:  g++
 *
 *         Author:  Isaac Vinicius, isaacvinicius2121@alu.ufc.br
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#include <bits/stdc++.h>
#include "../inc/livro.hpp"
#include "../inc/livro_drama.hpp"

Livro::Livro(){
    // std::cout << "Classe Livro Criada!" << "\n";
}
Livro::~Livro(){
    // std::cout << "Classe Livro Destruida!" << "\n";
}
Livro::Livro(std::string nome, double valor, int quantidade, int id_livro, std::string caracteristica){
    this->nome = nome;
    this->valor = valor;
    this->quantidade = quantidade;
    this->id_livro = id_livro;
    this->caracteristica = caracteristica;
}

std::string Livro::getNome(){
    return nome;
}

double Livro::getValor(){
    return valor;
}

int Livro::getQuantidade(){
    return quantidade;
}

int Livro::getId_livro(){
    return id_livro;
}

std::string Livro::getCaracteristica(){
    return caracteristica;
}

void Livro::setNome(std::string nome){
    this->nome = nome;
}

void Livro::setValor(double valor){
    this->valor = valor;
}

void Livro::setQuantidade(int quantidade){
    this->quantidade = quantidade;
}

void Livro::setCaracteristica(std::string caracteristica){
    this->caracteristica = caracteristica;
}

void Livro::print(){
    std::cout << "Nome do Livro: " << getNome() 
    << "\nValor: " << getValor() 
    << "\nQuantidade: " << getQuantidade()
    << "\nID: " << getId_livro()
    << "\nCaracteristica: " << getCaracteristica();
}