#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

    main (){
 	setlocale (LC_ALL, "portuguese");
 	float f,c,p,mm;
 	printf("Conversão de uma temperatura em Fahrenheit\n");
 	printf("Digite a temperatura em Fahrenheit:");
 	scanf("%f",&f);
	c=(5*f-160)/9;
	printf("O valor de Fahrenheit em Celsius é de %.2f\n:",c);
	
	printf("Quantidade de chuva de polegadas para milimetros\n");
	printf("Digite a quantidade de chuva em polegadas:");
	scanf("%f",&p);
	mm=25.4*p ;
	printf("A quantidade de chuva em milimetros é de:%.2f", mm);
	
	system("pause");
	
	
}
