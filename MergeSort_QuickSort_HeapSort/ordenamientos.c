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
//		printf("\nIteracion numero %d \n",i+1);
//		printArray(arreglo,n);
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
//		printf("\nIteracion numero %d \n",i);
//		printArray(a,n);
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
//	printf("\nIteracion numero %d \n",i+1); 
//	printArray(a,n); 
	if(iteracion==0) 
		break;			 
	}
	return contador; //Regresa el valor de contador
}
int contador=0;

int partition (int arr[], int low, int high){
   	int pivot = arr[high];    
	//printf("Pivote: %d   \n ",pivot);
	int j,i = (low - 1);  
   	for (j = low; j <= high- 1; j++){
   		contador++;
       	if (arr[j] <= pivot){
            		i++;    
            		swap(&arr[i], &arr[j]);
        	}
    	}
    	swap(&arr[i + 1], &arr[high]); 
	return (i + 1);
}

int quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
    	contador++;
        int pi = partition(arr, low, high);
      //  printSubArray(arr,low,pi-1);
	    quickSort(arr, low, pi - 1);
       // printSubArray(arr,pi+1,high);
	    quickSort(arr, pi + 1, high);
    }
    return contador;
}


int heapSize;

int HeapSort(int* A, int size){
	BuildHeap(A,size);
  	int i;
  	for(i = size - 1; i > 0; i--){
    	swap(&A[0],&A[heapSize]);      
      	heapSize--;
    //  	printf("Iteracion HS: \n");
  	//printArray(A,size);
	Heapify(A, 0,size);
   }
   return contador;
}

void Heapify(int* A, int i, int size)
{
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int largest;
	contador++;
	if(l <= heapSize && A[l] > A[i]){
    	largest = l;
	}
  	else
    	largest = i;
  	if(r <= heapSize && A[r] > A[largest]){
    	largest = r;
	}
  	if(largest != i){
    	swap(&A[i],&A[largest]);
//    	printArray(A,size);
    	Heapify(A, largest,size);
     }
      
}

void BuildHeap(int* A, int size){
	heapSize = size - 1;
  	int i;
  	for(i = (size - 1) / 2; i >= 0; i--){
		Heapify(A, i,size);
  	}
	//printf("Termin%c de construir el HEAP \n",162);
}

void merge(int list[], int p, int q, int r) {
	int list2[r - p + 1];
	int i,j,k;
	k=0;
	i=p;
	j=q+1;
	while(i <= q && j <= r){
		contador++;
		if(list[i] <= list[j]) {
			list2[k++] = list[i++];
		}
		else {
			list2[k++] = list[j++];
		}
	}
	while(i <= q) {
		list2[k++] = list[i++];
	}
	while(j <= r) {
		list2[k++] = list[j++];
	}
	for(i=r; i >= p; i--){
		list[i] = list2[--k];
	}
}

int mergeSort(int arr[], int p, int r){
	int q;
	if(p < r){
		q = (p + r) / 2;
		mergeSort(arr,p,q);
		mergeSort(arr,q+1,r);
		merge(arr,p,q,r);
	}
	return contador;
}

