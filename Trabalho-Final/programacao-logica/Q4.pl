% @author: Isaac Vinicius - 500935

%Implemente o predicado elimina_repetidos( L1 , L2 ) que recebe em L2 o resultado de L1
%sem elementos duplicados. Por exemplo, se L1 = [ 1 , 1 , 1 , 5 , 5 ], então L2 = [ 1 , 5 ].

elimina_repetidos([], []).
elimina_repetidos([X|Lista1], [Y|Lista2]) :-
    X=Y, % Retorna sucesso se os termos Termo1 e Termo2 unificam. Ex:2 = 2 -> true.
    delete(Lista1, X, L2), % exclui elementos correspondentes da lista. True quando List2 é uma lista com todos os elementos de List1
    elimina_repetidos((L2), Lista2).