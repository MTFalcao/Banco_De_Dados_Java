#include <stdio.h>

int main(){
	int adn, mdn, ddn, aa, ma, da, tda, tdn, sub;
	
	printf("\n ano de nascimento: ");
	scanf("%d",&adn);
	printf("\n mes de nascimento: ");
	scanf("%d",&mdn);
	printf("\n dia de nascimento: ");
	scanf("%d",&ddn);
	
	printf("\n Ano atual: ");
	scanf("%d",&aa);
	printf("\n mes atual: ");
	scanf("%d",&ma);
	printf("\n dia atual: ");
	scanf("%d",&da);
	
	tda = (aa*365) + ( ma*30) + da;
	tdn = (adn*365) + ( mdn*30) + ddn;
	
	sub = tda - tdn;
	
	printf("\n Sua idade em dias é : %d", sub);
	return 0;
}        
