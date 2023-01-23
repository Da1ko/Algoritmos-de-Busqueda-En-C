D#include <stdio.h>
#include <string.h>
#include <conio.h>

char arr[20];
int n = sizeof(arr) / sizeof(arr[0]);


void printArray(char arr[],int size){
	int i;
  	for (i=0; i <= size; i++){
       	printf("%c", arr[i]);
	}
    printf("\n");
} 

void countingSort(char arr[])
{
	int i;
  	char tercerArr[n];
    char max = arr[0];
    //Encontramos el maximo
    for ( i = 1; i < strlen(arr); i++) {
          if (arr[i] > max)
          max = arr[i];
    }
	char min = arr[0];
    for ( i = 1; i < strlen(arr); i++) {
          if (arr[i] < min)
          min = arr[i];
    }
	 	
	int segundoArr[max + 1];
	memset(segundoArr, 0, sizeof(segundoArr)); //Se inicializan los valores en 0 
	//Cuenta los valores a usar
    for (i = 0; i <= arr[i]; i++)
        segundoArr[arr[i]]++;

	
	printf("PRIMERA PASADA \n");
	printf("\nA B C D E F G H I J: \n");
 	for (i = min; i <= max; i++){
        segundoArr[i];
        printf("%d ",segundoArr[i]);
	}
	printf("\n");
	printf("SUMA VALORES: \n");
	printf("\nA B C D E  F  G  H  I  J: \n");
    //Suma del indice actual mas el indice anterior  
    for (i = min; i <= max; i++){
        segundoArr[i] += segundoArr[i - 1];
        printf("%d ",segundoArr[i]);
	}	 
	printf("\n");
    for (i = n-1; i>=0; i--)
    {
    	printArray(tercerArr,n);
        tercerArr[segundoArr[arr[i]]-1] = arr[i];
        segundoArr[arr[i]]--;   
    }
	//Pasamos el tercer arreglo al original
    for (i = 0; arr[i]; ++i){
        arr[i] = tercerArr[i];
	}
	
}
 

