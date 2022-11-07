% @author: Isaac Vinicius - 500935

% Implemente um programa em Prolog sobre a seguinte família:
% Construa um banco de fatos de uma família. De modo que seja possível representar os seguintes predicados: 
% sexo(masculino ou feminino), irmã, irmão, descendente, mãe, pai, avô, avó, tio, tia, primo e prima.
/*
                 ANA O--------O JOAO
                         |
                --------------------
                |                  |
        O-------O PEDRO       MARIA O------O
            |                           |
        -----                           ------
        |                                    |
        O LUANA                              O DAVI

*/
%fatos:
feminino(ana).
feminino(maria).
feminino(paula).
feminino(luana).

masculino(joao).
masculino(pedro).
masculino(carlos).
masculino(davi).

parentesco(ana, pedro).     % ana mae do pedro
parentesco(ana, maria).     % ana mae da maria
parentesco(joao, pedro).    % joao pai do pedro
parentesco(joao, maria).    % joao pai da maria
parentesco(pedro, luana).   % pedro pai da luana
parentesco(maria, davi).    % maria mae do davi
parentesco(pedro, maria).   % pedro irma da maria
parentesco(davi, luana).    % davi primo da luana

%regras:
pai(X,Y) :- 
    masculino(X),
    parentesco(X,Y).

mae(X,Y) :- 
    feminino(X),
    parentesco(X,Y).

filho(X,Y) :-
    masculino(X),
    parentesco(Y,X).

filha(X,Y) :-
    feminino(X),
    parentesco(Y,X).

irma(X, Y) :-
    X\==Y,      % X nao nao e identico a Y
    feminino(X),
    parentesco(Z,X),
    parentesco(Z,Y).

irmao(X, Y) :-
    X\==Y,      % X nao nao e identico a Y
    masculino(X),
    parentesco(Z,X),
    parentesco(Z,Y).

% Avô
avo_m(X,Y) :-
    masculino(X),
    parentesco(X,Z),
    parentesco(Z,Y).

% Avó
avo_f(X,Y) :-
    feminino(X),
    parentesco(X,Z),
    parentesco(Z,Y).

tio(X,Z):- 
    irmao(X,Y), 
    parentesco(Y,Z).

tia(X,Z) :- 
    irma(X,Y), 
    parentesco(Y,Z).

primo(A,B) :-
	masculino(A),       % Eh homem
	parentesco(X,A),    % tem relacao com alguem da familia
	parentesco(Y,B),    % O a segunda pessoa tem relacao com alguem da familia
	parentesco(X,Y).    % E as pessas que com quem A e B se relacionam, sao parentes

prima(A,B) :-
    feminino(A),        % Eh mulher
    parentesco(X,A),    % tem relacao com alguem da familia
    parentesco(Y,B),    % O a segunda pessoa tem relacao com alguem da familia
    parentesco(X,Y).    % E as pessas que com quem A e B se relacionam, sao parentes