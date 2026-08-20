#include "TADLISTA.h"

int main(){

Lista *produtos = cria_lst();

for(int i = 0; i < 2 ; i++){

    produtos = lst_insere(produtos, novo_elemento_lst());
}

imprime(produtos);

    return 0;
}