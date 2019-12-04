#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

 int main(void){
	setlocale(LC_ALL, "Portuguese");
	int ida,resultado;
	printf("Programa que mede todos seus batimentos conforme sua idade\n");
	printf("Digite sua idade: ");
    scanf("%d",&ida );
    resultado=31536000*ida;
	printf("Seu número de batimentos conforme sua idade é de: %d\n", resultado);
	
	    system("pause");
} 
