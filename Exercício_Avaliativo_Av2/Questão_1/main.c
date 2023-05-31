#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

#include "funcoes.h"

int main()
{
    setlocale(LC_ALL,"portuguese");
    
    int num;
    int opcao,bs_opcao;
    
    printf("Digite o tamanho do vetor: ");
    scanf("%d",&num);
    
    int *vetor =(int*)malloc(num * sizeof(int));

    printf("\n");
    for(int i = 0; i < num; i++){
        printf("Digite o %dº número do vetor: ",i+1);
        scanf("%d",&vetor[i]);
    }
    
    do{
        
        printf("\nAgora Escolha uma das opções a seguir para organizar seu vetor\n");
        printf("[1] - Bubble sort.\n");
        printf("[2] - InsertionSort.\n");
        printf("[0] - Sair.\n");
        printf("-> ");
        scanf("%d",&opcao);
        printf("\n");
        
        switch(opcao){
            case 1:
            
            printf("Escolha o tipo de Bubble sort.\n");
            printf("[1] - Bubble sort Crescente.\n");
            printf("[2] - Bubble sort Decrescente .\n");
            printf("[0] - retornar.\n");
            printf("-> ");
            scanf("%d",&bs_opcao);
            printf("\n");
            
            do{
            switch(bs_opcao){
                
                case 1:
                    bubblesort_Crescente(vetor,num);
                    bs_opcao = 3;
                    break;
                
                case 2:
                    bubblesort_Decrescente(vetor,num);
                    bs_opcao = 3;
                    break;
                
                default:
                    printf("\nOpção invalida, escolha uma das opções abaixo.\n");
                    
                    printf("\nEscolha o tipo de Bubble sort.\n");
                    printf("[1] - Bubble sort Crescente.\n");
                    printf("[2] - Bubble sort Decrescente .\n");
                    printf("[0] - Retornar.\n");
                    printf("-> ");
                    scanf("%d", &bs_opcao);
                    printf("\n");
                    break;
            }
            
            }while(bs_opcao !=0);
            break;
            
            case 2:
            
            insertionSort(vetor,num);
            break;
            
            case 0:
            printf("Programa irá se encerrar.");
            break;
            
            default:
            printf("Opção invalida, digite uma opção valida!\n");
        }
        
    }while(opcao!=0);        
    
    free(vetor);
    return 0;
}
