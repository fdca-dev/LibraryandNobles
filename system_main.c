//obrigrações:criar_pilha(), push(), top(), pop(), vazia(), mostra_pilha() e liberar_pilha().
 
void menu(){
   printf("\n\n -------BIBLIOTECA DE LIVROS-------    \n\n");
   printf("\n   1 - CADASTRO DE LIVRO\n");
   printf("\n   2 - MOSTRAR TODOS NA PILHA\n");
   printf("\n   3 - CONSULTAR LIVRO CONTATO POR NOME\n");
   printf("\n   4 - REMOVER LIVRO DA PILHA\n");
   printf("\n   5 - SAIR DO SISTEMA\n");
}
 
/*struct cadastrar(){
 char nome[50];
 char autor[50];
 char editora[50];
 int codigo;
 
}Livro;*/
 
typedef struct cadastrar *cadastrarNovo;
#define MAX 5
cadastrarNovo tab[MAX];
 
struct pilha{
    int num;
    float vetor[MAX];
};
 
/*pilha *cria(void){
    pilha *p=(Pilha*)malloc(sizeof(Pilha));
    p->num=0;
    return p;
}*/
 
#include <stdio.h>
#define MAX 5
//obrigrações:criar_pilha(), push(), top(), pop(), vazia(), mostra_pilha() e liberar_pilha().
 
int main(void){
    int op;
    menu();
   // cadastrar();
    switch(op){
        case 1: /*cadastrar();
            i++;*/
        break;
        case 2: printf("");break;
        case 3: printf("");break;
        case 4: printf("");break;
        case 5: printf("");break;
        default:printf("Opcao Invalida!!!");
   }
}
