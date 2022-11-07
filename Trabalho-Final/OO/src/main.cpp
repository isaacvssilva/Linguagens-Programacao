/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  -
 *
 *        Version:  1.0
 *        Created:  25/10/2022 11:25:37
 *       Revision:  none
 *       Compiler:  -
 *
 *         Author:  Isaac Vinicius, isaacvinicius2121@alu.ufc.br
 *   Organization:  UFC-Quixadá
 *
 * =====================================================================================
 */

#include <bits/stdc++.h>
#include "../inc/main.hpp"

void menu(){
    std::cout<<"======================================\n";
    std::cout << "\tLivraria\n";
    std::cout<<"======================================\n";
    std::cout<<"\n1. Consultar estoque\n\n";
    std::cout<<"2. Efetuar compra\n\n";
    std::cout<<"3. Efetuar venda\n\n";
    std::cout<<"4. Consultar valor em caixa\n\n";
    std::cout<<"5. Sair\n\n";
    std::cout<<"Selecione uma opcao: ";
}

int main(){
    
    LivroDrama livroDrama1("A Rainha Vermelha", 25.00, 1, 1, "Capa dura");
    LivroDrama livroDrama2("O menino do pijama listrado", 20.00, 1, 2, "Capa dura");
    LivroDrama livroDrama3("O cacador de Pipas", 40.00, 1, 3, "Capa dura");

    LivroAventura livroAventura1("A Invenção de Hugo Cabret", 45.50, 1, 4, "Ilustracoes");
    LivroAventura livroAventura2("Mau Comeco", 20.00, 1, 5, "Ilustracoes");
    LivroAventura livroAventura3("Outlander: a Viajante do Tempo", 35.50, 1, 6, "Ilustracoes");

    LivroComedia livroComedia1("Vestida de Sonhos", 11.00, 1, 7, "capa brochura");
    LivroComedia livroComedia2("Sobre os ossos dos mortos", 50.00, 1, 8, "capa brochura");
    LivroComedia livroComedia3("Oito horas perfeitas", 54.00, 1, 9, "capa brochura");

    Livraria livraria(
        /*Lista de livros no estoque*/
        std::vector<Livro>
        {
            livroDrama1, livroDrama2, 
            livroDrama3, livroAventura1, 
            livroAventura2, livroAventura3, 
            livroComedia1, livroComedia2, livroComedia3
        }, 300.00 // saldo inicial
    );
    /*Variaveis para consulta de estoque da livraria*/
    int qtdDrama = 0, qtdAventura = 0, qtdComedia = 0; 
    int op;    
   
    do{
        menu();
        std::cin >> op;
        switch (op){
            case 1: //consutar estoque
                
                qtdDrama += livroDrama1.getQuantidade() + livroDrama2.getQuantidade() + livroDrama3.getQuantidade();
                std::cout << "Quantidade total de livros\nda categoria drama: " << qtdDrama << " unidades\n\n"; 
                
                qtdAventura += livroAventura1.getQuantidade() + livroAventura2.getQuantidade() + livroAventura3.getQuantidade();
                std::cout << "Quantidade total de livros\nda categoria aventura: " << qtdAventura << " unidades\n\n"; 
                
                qtdComedia += livroComedia1.getQuantidade() + livroComedia2.getQuantidade() + livroComedia3.getQuantidade();
                std::cout << "Quantidade total de livros\nda categoria comedia: " << qtdComedia << " unidades\n\n";
                
                std::cout << "Quantidade total de livros na livraria: " << livraria.getLivrosEstoque().size() << " unidades\n";
                break;

            case 2://efetuar compra
                int op_cat_compra;
                std::cout<<"\n1.Drama ";
                std::cout<<"2.Aventura ";
                std::cout<<"3.Comedia\n\n";
                std::cout<<"Selecione uma opcao: ";
                std::cin >> op_cat_compra;

                switch (op_cat_compra){
                    case 1:
                        std::cout<<"\n1.A Rainha Vermelha | ID: 1\n";
                        std::cout<<"2.O menino do pijama listrado | ID: 2\n";
                        std::cout<<"3.O cacador de Pipas | ID: 3\n\n";
                        try{
                            int id, qtd;
                            std::cout<<"ID do livro que deseja comprar: " << "\n";
                            std::cin >> id;
                            std::cout<<"Quantidade de livros que deseja comprar: " << "\n";
                            std::cin >> qtd;
                            livraria.efetuarCompra(id, qtd);
                            

                        }catch(std::exception &e){
                            std::cerr << e.what() << "\n";
                        }

                    break;
                    case 2:
                        std::cout<<"\n1.A Invenção de Hugo Cabret | ID: 4\n";
                        std::cout<<"2.Mau Comeco | ID: 5\n";
                        std::cout<<"3.Outlander: a Viajante do Tempo | ID: 6\n\n";
                        try{
                            int id, qtd;
                            std::cout<<"ID do livro que deseja comprar: " << "\n";
                            std::cin >> id;
                            std::cout<<"Quantidade de livros que deseja comprar: " << "\n";
                            std::cin >> qtd;
                            livraria.efetuarCompra(id, qtd);
                            

                        }catch(std::exception &e){
                            std::cerr << e.what() << "\n";
                        }
                    break;
                    case 3:
                        std::cout<<"\n1.Vestida de Sonhos | ID: 7\n";
                        std::cout<<"2.Sobre os ossos dos mortos | ID: 8\n";
                        std::cout<<"3.Oito horas perfeitas | ID: 9\n\n";
                        try{
                            int id, qtd;
                            std::cout<<"ID do livro que deseja comprar: " << "\n";
                            std::cin >> id;
                            std::cout<<"Quantidade de livros que deseja comprar: " << "\n";
                            std::cin >> qtd;
                            livraria.efetuarCompra(id, qtd);
                            

                        }catch(std::exception &e){
                            std::cerr << e.what() << "\n";
                        }
                    break;    
                }
            break;

            case 3: //efetuar venda
                int op_cat_venda;
                std::cout<<"\n1.Drama ";
                std::cout<<"2.Aventura ";
                std::cout<<"3.Comedia\n\n";
                std::cout<<"Selecione uma opcao: ";
                std::cin >> op_cat_venda;
                /*testes de menu*/

                switch (op_cat_venda){
                    case 1:
                        std::cout<<"\n1.A Rainha Vermelha | ID: 1\n";
                        std::cout<<"2.O menino do pijama listrado | ID: 2\n";
                        std::cout<<"3.O cacador de Pipas | ID: 3\n\n";
                        try{
                            int id, qtd;
                            std::cout<<"ID do livro que deseja vender: " << "\n";
                            std::cin >> id;
                            std::cout<<"Quantidade de livros que deseja vender: " << "\n";
                            std::cin >> qtd;
                            livraria.efetuarVenda(id, qtd);

                        }catch(std::exception &e){
                            std::cerr << e.what() << "\n";
                        }

                    break;
                    case 2:
                        std::cout<<"\n1.A Invenção de Hugo Cabret | ID: 4\n";
                        std::cout<<"2.Mau Comeco | ID: 5\n";
                        std::cout<<"3.Outlander: a Viajante do Tempo | ID: 6\n\n";
                        try{
                            int id, qtd;
                            std::cout<<"ID do livro que deseja vender: " << "\n";
                            std::cin >> id;
                            std::cout<<"Quantidade de livros que deseja vender: " << "\n";
                            std::cin >> qtd;
                            livraria.efetuarVenda(id, qtd);

                        }catch(std::exception &e){
                            std::cerr << e.what() << "\n";
                        }
                    break;
                    case 3:
                        std::cout<<"\n1.Vestida de Sonhos | ID: 7\n";
                        std::cout<<"2.Sobre os ossos dos mortos | ID: 8\n";
                        std::cout<<"3.Oito horas perfeitas | ID: 9\n\n";
                        try{
                            int id, qtd;
                            std::cout<<"ID do livro que deseja vender: " << "\n";
                            std::cin >> id;
                            std::cout<<"Quantidade de livros que deseja vender: " << "\n";
                            std::cin >> qtd;
                            livraria.efetuarVenda(id, qtd);
                            
                        }catch(std::exception &e){
                            std::cerr << e.what() << "\n";
                        }
                    break;    
                }
                break;
            case 4:
                std::cout << livraria.getSaldo() << "$" << "\n";
                break;
            default:
            printf("Ate breve!\n");
            break;
        }
        
    } while (op != 5);
    
    return(0);
}