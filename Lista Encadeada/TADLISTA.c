#include "TADLISTA.h"
#include <stdlib.h>
#include <stdio.h>

Lista *cria_lst(void){
    return NULL;
}

Lista *novo_elemento_lst(void){

    Lista *novo = malloc(sizeof(Lista));

if(novo == NULL){
    printf("Nao temos memoria sufuciente\n");
    exit(1);
}
novo->prox = NULL;

printf("Coloque o id do produto: \n");
scanf("%d%*c", &novo->id);
printf("Coloque a descriaoo do produto: \n");
scanf(" %30[^\n]", novo->nome);
printf("Coloque o estoque do produto: \n");
scanf(" %f%*c", &novo->estoque);
printf("Coloque o preço do produto: \n");
scanf(" %f%*c", &novo->preco);

return novo;

}


Lista *lst_insere(Lista *cabeca_lst, Lista *novo_elemento_lst){

    novo_elemento_lst->prox = cabeca_lst;

    return novo_elemento_lst;

}

void imprime(Lista *cabeca_lst){
Lista *aux = cabeca_lst;

while(aux != NULL){
  
printf("\n  ID DO PRODUTO %d\n", aux->id);

printf("\n Descriaoo do produto: %s\n ", aux->nome);

printf("\nEstoque do produto: %.2f\n", aux->estoque);

printf("\nPreco do produto: %.2f\n", aux->preco);

aux = aux->prox;
}



}


void liberar_lst(Lista *cabeca_lst){
Lista *aux;
Lista *p = cabeca_lst;

while(p != NULL){
    aux = p;
    p = p->prox;
    free(aux);
}


}


Lista *lst_busca_id(Lista *cabeca_lst, int id){

Lista *atual = cabeca_lst;

while(atual != NULL && id != atual->id){
    atual = atual->prox;

    return atual;
}

}