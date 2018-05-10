//Rafael Antônio Lima Hipólito
#include <stdio.h>

int main (){	
	int i=0, x=0;
	char num[300];
	
	printf("Entre com a string: \n\n");
	fgets(num,300,stdin);
	
	while(num[i]){
		
		if(num[i]>=48 && num[i]<=57){
			
			num[i]=num[i]-'0';
			x = x*10+num[i];
		}
		
		i++;
	}
	
	printf("Nova string: %d",x);
	
	return 0;
}
