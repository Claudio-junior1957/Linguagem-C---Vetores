#include<stdio.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL,"Portuguese");
	int A[8], i;
	printf("Digite 8 n�meros inteiros\n\n");
	//La�o para receber os 8 valores que ser� informado pelo usuario
	for(i = 0; i < 8; i++){
		printf("Digite %i� n�mero: ", i+1);
		scanf("%i", &A[i]);
	}
	printf("\nVETOR\n");
	//La�o para exibir os 8 valores valores informados mas na ordem inversa
	for(i = 7; i >= 0; i--){
		printf("%i  ", A[i]);
	}
	return(0);
}
