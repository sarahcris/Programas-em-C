#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

main(){
    setlocale(LC_ALL, "Portuguese");
	float a,b,c,d,soma;
	printf("Programa exibe a soma dos tr�s menores n�meros.\n");
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f" ,&a);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f" ,&b);
	
	printf("Digite o terceiro n�mero: ");
	scanf("%f" ,&c);
	
	printf("Digite o quarto n�mero: ");
	scanf("%f" ,&d);
	
	if(a>b && a>c && a>d){
	soma=a+b+c+d;
	}
	if(b>a && b>c && b>d){
	soma=a+c+d;
	}
	if(c>a && c>b && c>d){
	soma=a+b+d;
	}
	if(d>a && d>b && b>c){
	soma=a+b+c;
	}
	printf("O valor da soma � %.2f\n", soma);
	
	system("PAUSE");
	}
