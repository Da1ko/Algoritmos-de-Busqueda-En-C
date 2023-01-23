#include "countingSort.c"
#include <stdio.h>

int main(){
	int op;
	printf("\tALGORITMOS DE ORDENAMIENTO RAROS\n");
	printf("Que algoritmo desea usar? \n");
	printf("1.-CountingSort\n");
	printf("2.-RadixSort\n");
	printf("3.-Salir\n");
	scanf("%d", &op);
		switch(op)
		{
			case 1:
				printf("\tCOUNTING SORT\n");
				printf("SOLO SE PUEDEN USAR CARACTERES ENTRE a Y j MINUSCULA\n");
  				printf("Escribe las letras a ordenar sin espacio: (SOLO 20 CARACTERES COMO MAXIMO)\n");
  				fflush(stdin);
  				gets(arr);
  				system("cls");
    			countingSort(arr);
    			//abcdefghijabcdefghij
    			printf("\nArreglo Ordenado\n");
    			printArray(arr,n);
			break;
			
			case 2:
				printf("Lo sentimos no esta disponible :c...");
			break;
		}
	
}
