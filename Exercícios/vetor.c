#include <stdio.h>

int main(void);
int vet[20];
int i;

for(i=0;i<=19;i=i+1){
printf("Insira o %dº numero: ",i+1);
scanf("%d",&vet[i]);
}

printf("Os numeros selecionados foram: ");

for(i=0;i<=19;i=i+1){
     printf("%d",vet[i])

}
}

/* Exercício feito em 22/04/22*/
