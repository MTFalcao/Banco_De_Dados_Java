
#include <limits.h>
#include <stdlib.h>
#include <stdio.h>

#include "pilha.h"
#include "fila.h"
#include "arvore.h"

int main()
{
    int opc,num_P,num_F,num_A;
    int removerElemento,buscarElemento,maior_num;
    
    //----------Alocação da Pilha-----------------
    node_pilha *PILHA = (node_pilha*)malloc(sizeof(node_pilha));
    PILHA -> prox = NULL;
    int tam=0;

    //----------Alocação da Fila------------------
    fila_node *FILA = (fila_node*)malloc(sizeof(fila_node));
    FILA ->prox = NULL; 

    //----------Alocação da Arvore------------------
     Arvore_B arvore;
    arvore.raiz = NULL;
    No *raiz = NULL;
  
    do{
        
    
    printf("Escolha uma das estruturas a seguir\n");
    printf("[1]- Pilha\n");
    printf("[2]- Fila\n");
    printf("[3]- Arvore\n");
    printf("[0]- Sair\n");
    printf("-> ");
    
    scanf("%d",&opc);
  
    switch(opc){
        case 1:
        do{
        
            printf("\nOque deseja fazer agora: ");
            printf("\n[1]- Empilhar\n");
            printf("[2]- Desempilhar\n");
            printf("[3]- Imprimir topo da pilha\n");
            printf("[4]- Imprimir pilha\n");
            printf("[5]- Limpar pilha\n");
            printf("[0]- Sair\n");
            printf("-> ");
            scanf("%d",&num_P);
        
            
            switch(num_P){
                case 1:
                PUSH(PILHA,tam);
                break;
                
                case 2:
                POP(PILHA,tam);
                break;
                
                case 3:
                TOPOPILHA(PILHA);
                break;
                
                case 4:
                IMPRIME(PILHA,tam);
                break;

                case 5:
                LIMPARPILHA(PILHA);
                break;
                
                case 0:
                break;

                default:
                printf("\nNúmero inválido, digite uma opção válida!\n");
                break;
            }
        }while(num_P != 0);
        break;
      
        case 2:

      do{
        
            printf("\nOque deseja fazer agora: ");
            printf("\n[1]- Enfileirar\n");
            printf("[2]- Desenfileirar\n");
            printf("[3]- Imprimir maior elemento da fila\n");
            printf("[4]- Imprimir menor elemento da fila\n");
            printf("[5]- Imprimir Fila\n");
            printf("[6]- Limpar Fila\n");
            printf("[0]- Sair\n");
            printf("-> ");
            scanf("%d",&num_F);
        
            
            switch(num_F){
                case 1:
                ENQUEUE(FILA,tam);
                break;
                
                case 2:
                DEQUEUE(FILA,tam);
                break;
                
                case 3:
                IMPRIMEMAIOR(FILA);
                break;
                
                case 4:
                IMPRIMEMENOR(FILA);
                break;

                case 5:
                IMPRIMEFILA(FILA,tam);
                break;
                
                case 6:
                LIMPARFILA(FILA);
                break;

                case 0:
                break;

                default:
                printf("\nNúmero inválido, digite uma opção válida!\n");
                break;
            }
        }while(num_F != 0);
        break;
      
        case 3:

      do{
        
            printf("\nOque deseja fazer agora: ");
            printf("\n[1]- Inserir um elemento\n");
            printf("[2]- Imprima a arvore\n");
            printf("[3]- Imprima a arvore Da direita para esquerda\n");
            printf("[4]- Imprimir maior elemento\n");
            printf("[5]- Buscar elemento \n");
            printf("[6]- Deletar um elemento\n");
            printf("[0]- Sair\n");
            printf("-> ");
            scanf("%d",&num_A);
        
            
            switch(num_A){
                case 1:
                raiz = input(raiz);
                break;
                
                case 2:
                  printf("\n\nÁrvore binária: ");
                imprime(raiz);
                printf("\n");
                break;
                
                case 3:
                  printf("\n\nÁrvore binária Da direita para esquerda: ");  
                imprimirDireitaEsquerda(raiz);
                printf("\n");
                break;
                
                case 4:
                maior_num = encontrarMaiorNumero(raiz);
                printf("\n");
                break;

                case 5:
                  printf("Digite o valor a ser buscado: ");
                  scanf("%d", &buscarElemento);
                buscar(raiz, buscarElemento);
                printf("\n");
                break;
                
                case 6:
                  printf("\n\nDigite o valor a ser removido: ");
                  scanf("%d", &removerElemento);
                raiz = remover(raiz, removerElemento);
                break;

                case 0:
                break;

                default:
                printf("\nNúmero inválido, digite uma opção válida!\n");
                break;
            }
        }while(num_A != 0);
        
        default:
        break;
    }
  }while(opc != 0);
  printf("Codigo finalizado com sucesso!");
  return 0;
}
