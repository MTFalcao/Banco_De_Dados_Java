#include <stdio.h>

int main(void){
int son1=0, som2=0;
int i,j;
int vet[5];
int vet2[5];

printf("Digite os numeros do primeiro vetor\n");

for(i=0;1<5; i=1+1){
  printf("%dº numero: ",i+1);
  scanf("%d" ,&vet[i]);
  som1 = som1+vet[i];
}

printf("\n\nDigite os numeros do segundo vetor\n");
for(j=0;j<5;j=j+1){
  printf("%d° numero: ",j+1);
  scanf("%d" ,&vet2[j]);
  som2=som2+vet2[j];
}
if(som1==som2){
  printf("Os dois vetores são iguais");
}else{
  printf("Os dois vetores sao diferentes");
}
}

/* Exercício feito em 28/05/22 */
