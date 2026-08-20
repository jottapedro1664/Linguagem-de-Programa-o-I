    #ifndef __TADLISTA_H__
    #define __TADLISTA_H__

   typedef struct lista{
      int id;
      char nome [31];
      float estoque;
      float preco;
      struct lista* prox;

   }Lista;

Lista *cria_lst(void);

Lista *novo_elemento_lst(void);

Lista *lst_insere(Lista* cabeca_lst, Lista *novo_elemento);

Lista *retira_elemento(Lista* cabeca_lst, int id);
        
Lista *lst_busca_id(Lista* cabeca_lst, int id);

void imprime(Lista* cabeca_lst);

void liberar_lst(Lista* cabeca_lst);






    
    #endif 