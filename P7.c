//Rafael Antônio Lima HIpolito
//11721EEL015
#include <stdio.h>

int ackerman(int m, int n)
{
	if(m==0) return n + 1;
	else if(m > 0 && n==0) return ackerman(m-1, 1);
	else if(m > 0 && n > 0)  return ackerman(m - 1,ackerman(m, n - 1));
  	return 0;
}

int main(){
	int x, y;
		printf("Digite algum 'm': \n>");
		scanf("%d",&x);
		printf("Digite algum 'n': \n>");
		scanf("%d",&y);
		printf("(%d, %d) = %d\n", x, y, ackerman(x,y));
	return 0;
}
