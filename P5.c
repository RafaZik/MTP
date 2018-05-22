//Rafael Antônio LIma Hipólito
//11721EEL015
#include <stdio.h>

int main()
{
	int y , x, numero[64], *pnumero;
	char frase[256], *pfrase;
	for(x = 0; x < 256; x++) frase[x] = '\0';
	printf(" 1 - Codifica \n 2 - decodifica \n ");
	scanf("%d",&y);
	getchar();
	switch(y)
	{
		case 1:{
			printf("\nDigite a frase a ser codificada \n"); 
			gets(frase);
			char *pfrase= frase;
			printf("\nFrase codificada:\n");
			
			for(y=0;frase[y];y++){
				pnumero = (int*)pfrase;
				if(pnumero[x]!=0) printf("%d",pnumero[x]);
				if(pnumero[x+1]!=0) printf(", ");}
			break;
		}
		case 2:
		{
			printf("\nDigite a frase a ser decodifica\n\n\n]");
			
			for(x=0;x<64;x++)
			 {
				printf("\tn%d:\t ", x+1); scanf("%d", &numero[x]);
				pfrase = (char*)numero;
				if(numero[x]==0) 
				break;
			 }
			 printf("\n\n\tFrase decodificada: %s", pfrase);
	    }	
	}
	return 0;
}
