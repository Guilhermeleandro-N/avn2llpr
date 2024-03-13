#include <stdio.h>
int primo(int numero);
int main()
{
    int numeros[9];
    for (int c=0; c<9;c++){
        scanf("%d", &numeros[c]);
    }
    int cont;
    for (int c=0; c<9;c++){
    	cont=0;
		for(int b=2; b<10;b++){
			if (numeros[c]%b==0){
				cont++;
			}
		}
       	if (cont==0){
        	printf("O numero %d da matriz no indice %d e primo.\n", numeros[c],c);
		} else{
			if(numeros[c]==1 || numeros[c]==3 || numeros[c]==5 || numeros[c]==7){
				cont++;
				printf("O numero %d da matriz no indice %d e primo.\n", numeros[c],c);
			}
			
		}
    }
    return 0;
}
