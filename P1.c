//Rafael Ant�nio-11721EEL015
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <locale.h>

int main()
{

	setlocale(LC_ALL, "Portuguese");
    int estado, i=0, restri=0;
    char bits[256];
    char result;
    do
    {
        i=0;
        printf("Insira o n�mero bin�rio a ser testado:");
        scanf("%s", &bits);
        restri=0;
        while (bits[i] != '\0')
        {
            if( bits[i]!= '0' && bits[i]!='1' )
                restri++;
                 i++;
        }
        if(restri!=0)
            printf("\nO n�mero n�o � bin�rio, digiteoutro n�mero por favor.\n");
    }
    while(restri!=0);

    if (bits[0]=='0')
    {
        estado = 0;
        i=1;
        while(bits[i] != '\0')
        {
            if ( estado == 0 && bits[i] == '0')
                estado = 0;
            else if( estado == 0 && bits[i] == '1')
                estado = 1;
            else if( estado == 1 && bits[i] == '0')
                estado = 2;
            else if( estado == 1 && bits[i] == '1')
                estado = 0;
            else if( estado == 2 && bits[i] == '0')
                estado = 1;
            else if( estado == 2 && bits[i] == '1')
                estado = 2;
            i++;
        }
        printf("\n\nO estado final �: %d", estado);
        printf("\nO n�mero testado foi: %s", bits);
        if (estado == 0)
            printf("\nO n�mero inserido � m�ltiplo de 3.");
        if (estado != 0)
            printf("\nO n�mero inserido n�o � m�ltiplo de 3.");
    }
    if(bits[0]=='1')
    {
        estado = 1;
        i=1;
        while(bits[i] != '\0')
        {
            if ( estado == 0 && bits[i] == '0')
                estado = 0;
            else if( estado == 0 && bits[i] == '1')
                estado = 1;
            else if( estado == 1 && bits[i] == '0')
                estado = 2;
            else if( estado == 1 && bits[i] == '1')
                estado = 0;
            else if( estado == 2 && bits[i] == '0')
                estado = 1;
            else if( estado == 2 && bits[i] == '1')
                estado = 2;
            i++;
        }
        printf("\n\nO estado final �: %d", estado);
        printf("\nO n�mero testado foi: %s", bits);
        if (estado==0)
            printf("\nO n�mero inserido � m�ltiplo de 3.");
        if (estado != 0)
            printf("\nO n�mero inserido n�o � m�ltiplo de 3.");
    }
    return 0;
}
//Rafael Ant�nio-11721EEL015
