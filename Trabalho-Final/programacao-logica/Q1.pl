% @author: Isaac Vinicius - 500935

%Utilizando Prolog implemente um predicado primos(L) que determina se todos os
%números na lista L são primos.

is_primo(2).
is_primo(3).


is_primo(N):-
    N mod 2 =\= 0, % se nenhum resto for zero, o numero e primo
    N > 3,         % N e um numero primo se N > 3
    fator(N, 3).

fator(N, Y):-
    N mod Y =\= 0.  % se nenhum resto for zero, o numero e primo

fator(N, Y):-
    Y * Y < N,
    Y2 is Y + 2,
    fator(N, Y2).

% lista
primos([]).
primos([A | B]):-
    is_primo(A),
    primos(B).


