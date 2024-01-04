#include <stdio.h>
int main()
{
    int a, b, md;

    printf("Para descobrir a  sua media, digite as suas notas ");
    printf("\n Insira sua primeira nota: ");
    scanf("%d", &a);

    printf("Insira sua segunda nota: ");
    scanf("%d", &b);

    md= (a+b)/2;

    if (md > 6){
   printf(" Sua media foi %d e voce passou, Parabens!!! ", md); }
    
	else{
	printf("Sua media foi %d e voce nao passou, Estude mais para a recuperacao", md);
}
}
