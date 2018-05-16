//Rafael Antônio Lima Hipólito

#include <stdio.h>

void bits(unsigned int numero, int t)
{
	if(t != 0)
	{
	bits(numero/2, t-1);
	printf("%d", (numero % 2));
	}	
}
int main()
{
	int u, x, y, resultado;
	printf(" 1 = NOT \n\n 2 = AND \n\n 3 = OR \n\n 4 = XOR \n\n 5 = Right Shift \n\n 6 = Left Shift");
	printf("\n\n Escolha uma porta logica: ");
	scanf("%d", &u);
	switch(u)
	{
		case 1:
			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf("\n ARGUMENTO NOT %d", x);
			printf("[");
			bits(x, 32); //realiza a conta (numero/2, t-1)
			printf("]");
			resultado=~x; 
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;
		case 2:
			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x );
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO AND %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x&y; 
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;
		case 3:
			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO OR %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x|y; 
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;
		case 4:
			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO XOR %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x^y; // usa a porta xor
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;
		case 5:
			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO RIGHT SHIFT >> %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x>>y; //usa a right shift
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;
		case 6:
			printf("\n Digite o numero: ");
			scanf("%d", &x);
			getchar();
			printf(" Digite o segundo numero: ");
			scanf("%d", &y);
			getchar();
			printf("\n\n%d", x);
			printf("[");
			bits(x, 32);
			printf("]");
			printf(" ARGUMENTO LEFT SHIFT << %d", y);
			printf("[");
			bits(y, 32);
			printf("]");
			resultado=x<<y; 
			printf(" : %d", resultado);
			printf("[");
			bits(resultado, 32);
			printf("]");
			break;
	}
	getchar();
	return 0;
}

