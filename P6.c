//Rafael Antonio Lima Hipolito 11721EEL015
#include <stdio.h>

float media(int soma, float n){
	float d;
	d = soma/n;
	return d;
}

int soman(int v[20], int k) {
   	int x, soma=0;
   	for (x=0;x<k;x++)
    {
    	soma+=v[x];
	}
      return (soma);}
      
int main(){
	
	int num[20],soma,x,n;
	do{
		printf("Digite um numero entre 5 e 20 para definir o tamanho do vetor \n");
		scanf("%d",&n);
		}while(n<5||n>20);
		
	for(x=0; x<20; x++){
		num[x] = 0;}
	for(x=0; x<n; x++){
		printf("%do numero: ", x+1);
		scanf("%d", &num[x]); 
		getchar();
	}
	soma = (soman(num, x));
	printf("\nMedia dos %d numeros: %f",n, media(soma, n));
	return 0;
}
