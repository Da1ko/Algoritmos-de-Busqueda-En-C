#include "ordenamientos.h"
#include "utilidades.h"
#include "utilidades.c"
#include <stdio.h>

int selectionSort(int arreglo[], int n){ //Se cambio el void por int ya que regresa un valor entero
	int indiceMenor, i, j,contador=0; //Contador que llevara el numero de comparaciones realizadas
	for (i=0; i<n-1; i++){
		indiceMenor=i;
		for(j = i+1; j<n; j++){
			if(arreglo[j]<arreglo[indiceMenor])
				indiceMenor=j;
				contador++;//Se va sumando cada que entre en este bucle para sumar comparaciones
		}contador++;//Se va sumando cada que entre en este bucle para sumar comparaciones
		if (i!=indiceMenor){
			swap(&arreglo[i],&arreglo[indiceMenor]);
		}
		printf("\nIteracion numero %d \n",i+1);
		printArray(arreglo,n);
	}
	return contador; //Regresa el valor de contador
}


int insertionSort(int a[], int n){//Se cambio el void por int ya que regresa un valor entero
	int i,j,k;
	int aux;
	int contador=0; //Contador que llevara el numero de comparaciones realizadas
	for(i=1; i<n; i++){
		j=i;
		aux=a[i];
		while (j>0 && aux < a[j-1]){
			a[j] = a[j-1];
			contador++;//Se va sumando cada que entre en este bucle para sumar comparaciones
			j--;
		}
		a[j]=aux;
		printf("\nIteracion numero %d \n",i);
		printArray(a,n);
	}
	return contador; //Regresa el valor de contador
}

int bubbleSort(int a[], int size){ //Se cambio el void por int ya que regresa un valor entero
	int i,j,n,iteracion;
	n = size;
	int contador=0; //Contador que llevara el numero de comparaciones realizadas
	for(i=0; i<n-1;i++){ 
		iteracion = 0; 
		for(j=0;j<n-i-1;j++){ 
			contador++; //Se va sumando cada que entre en este bucle para sumar comparaciones
			if(a[j]>a[j+1]){
				swap(&a[j], &a[j+1]);
				iteracion += 1; 
			}
		}
	printf("\nIteracion numero %d \n",i+1); 
	printArray(a,n); 
	if(iteracion==0) 
		break;			 
	}
	return contador; //Regresa el valor de contador
}




