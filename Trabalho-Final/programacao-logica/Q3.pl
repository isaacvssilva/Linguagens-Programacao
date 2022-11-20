% @author: Isaac Vinicius - 500935

%Utilizando Prolog implemente o predicado tamanho(L, X), onde X é comprimento da
%lista L.

tamanho([], 0).
tamanho([_|L], N) :-
    tamanho(L,N1),
    N is N1+1.
