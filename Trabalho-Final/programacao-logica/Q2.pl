% @author: Isaac Vinicius - 500935

%Utilizando Prolog implemente um predicado n_esimo(N, L, X), onde X é o N-ésimo
%elemento da lista L.

%formato da lista: [p1, p2, p3, p4, p5].
n_esimo(1, [X|_], X).
n_esimo(N, [_|Y], X):-
    n_esimo(N1, Y, X),
    N is N1+1.
