% @author: Isaac Vinicius - 500935

%Utilizando Prolog implemente um predicado n_esimo(N, L, X), onde X é o N-ésimo
%elemento da lista L.

%formato da lista: [p0, p1, p2, p3, p4, p5].
n_esimo(0, [X|_], X).
n_esimo(N, [_|Y], X):-
    n_esimo(N1, Y, X),
    N is N1+1.
/*
?- n_esimo(1,[2,3,4,5,6],3).
true

?- n_esimo(1,[2,3,4,5,6],7).
false.
*/