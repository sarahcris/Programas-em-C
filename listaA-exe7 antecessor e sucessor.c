#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	float n;
	printf("Digite o numero:");
	scanf("%f", &n);
	printf("Antecessor: %f e sucessor: %f", n-1,n+1);
	
	system("pause");
	return 0;
}
