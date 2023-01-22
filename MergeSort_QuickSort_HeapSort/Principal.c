#include "ordenamientos.c"
#include <stdio.h>
#include<time.h>


int main(){
	int op,op2;
	int arr[500000];
	int contador=0;
	int n = sizeof(arr)/sizeof(arr[0]); // Para obtener el tamaño del arreglo se obtiene de la siguiente manera
										// sizeof(arr) me devuelve el número de bytes que ocupa el arreglo
										// Luego se divide el resultado con el tamaño de un elemento con sizeof(arr[0]).
										// Y con esto se le da a n la cantidad de elementos del arreglo
	int i;		
	printf("\tALGORITMOS DE ORDENAMIENTO\n");
	printf("Que accion desea realizar? \n");
	printf("1.-Ingresar datos manualmente\n");
	printf("2.-Generar datos aleatorio\n");
	printf("3.-Salir\n");
	scanf("%d", &op);
		switch(op)
		{
			case 1:
				printf("Ingresa los numeros a ordenar.\n");
				for(i=0;i<n;i++){
					printf("Ingrese el valor A[%i] ",i+1);
					scanf("%d",&arr[i]);
				}
				system("pause");
				system("cls");
				printf("\tALGORITMOS DE ORDENAMIENTO\n");
				printf("Conque metodo desea ordenarlo?.\n");
				printf("1.-BubbleSort\n");
				printf("2.-InsertionSort\n");
				printf("3.-SelectionSort\n");
				printf("4.-QuickSort\n");
				printf("5.-HeapSort\n");
				printf("6.-MergeSort\n");
				scanf("%d", &op2);
				switch(op2){
					case 1: 
						printf("Sin ordenar: \n");
						printArray(arr, n);
						printf("Realizando los cambios: \n");
						contador=bubbleSort(arr, n);
						printf("\nLISTA ORDENADA: \n");
						printArray(arr, n);
						printf("Comparaciones: %d",contador);
					break;
					
					case 2:
						printf("Sin ordenar: \n");
						printArray(arr, n);
						printf("Realizando los cambios: \n");
						contador=insertionSort(arr, n);
						printf("\nLISTA ORDENADA: \n");
						printArray(arr, n);
						printf("Comparaciones: %d",contador);
					break;
					
					case 3: 
						printf("Sin ordenar: \n");
						printArray(arr, n);
						printf("Realizando los cambios: \n");
						contador=selectionSort(arr, n);
						printf("\nLISTA ORDENADA: \n");
						printArray(arr, n);
						printf("Comparaciones: %d",contador);
					break;
					
					case 4:
						printf("Sin ordenar: \n");
						printf("Realizando los cambios: \n");
						printArray(arr, n);
						contador = quickSort(arr, 0, n - 1);
						printf("\nLISTA ORDENADA: \n");
						printArray(arr, n);
						printf("Comparaciones: %d",contador);
					break;
					
					case 5:
						printf("Sin ordenar: \n");
						printArray(arr, n);
						contador=HeapSort(arr, n);
						printf("\nLISTA ORDENADA: \n");
						printArray(arr, n);
						printf("Comparaciones: %d",contador);
					break;
					
					case 6:
						printf("Sin ordenar: \n");
						printArray(arr, n);
						contador = mergeSort(arr,0,n-1);
						printf("\nLISTA ORDENADA: \n");
						printArray(arr, n);
						printf("Comparaciones: %d",contador);
					break;
		
					case 7:
						printf("Vuelva pronto\n");				
					break;
				}
			break;
				
			case 2:
				printf("Generando datos aleatorios...\n");
				srand(time(NULL));
				for(i=0;i<n;i++){
 					arr[i]=rand()%1000; 
				}
				system("pause");
				system("cls");
				printf("\tALGORITMOS DE ORDENAMIENTO\n");
				printf("Conque metodo desea ordenarlo?.\n");
				printf("1.-BubbleSort\n");
				printf("2.-InsertionSort\n");
				printf("3.-SelectionSort\n");
				printf("4.-QuickSort\n");
				printf("5.-HeapSort\n");
				printf("6.-MergeSort\n");
				scanf("%d", &op2);
				switch(op2){
					case 1: 
					//	printf("Sin ordenar: \n");
				//		printArray(arr, n);
				//		printf("Realizando los cambios: \n");
						contador = bubbleSort(arr, n);
				//		printf("\nLISTA ORDENADA: \n");
				//		printArray(arr, n);
						printf("Comparaciones: %d",contador);
					break;
					
					case 2:
				//		printf("Sin ordenar: \n");
				//		printArray(arr, n);
				//		printf("Realizando los cambios: \n");
						contador = insertionSort(arr, n);
				//		printf("\nLISTA ORDENADA: \n");
				//		printArray(arr, n);
						printf("Comparaciones: %d",contador);
					break;
					
					case 3: 
				//		printf("Sin ordenar: \n");
				//		printArray(arr, n);
				//		printf("Realizando los cambios: \n");
						contador=selectionSort(arr, n);
				//		printf("\nLISTA ORDENADA: \n");
				//		printArray(arr, n);
						printf("Comparaciones: %d",contador);
					break;
				
					case 4:
				//		printf("Sin ordenar: \n");
						//printArray(arr, n);
						contador = quickSort(arr, 0, n - 1);
				//		printf("\nLISTA ORDENADA: \n");
				//		printArray(arr, n);
						printf("Comparaciones: %d",contador);
					break;
					
					case 5:
					//	printf("Sin ordenar: \n");
					//	printArray(arr, n);
						contador=HeapSort(arr, n);
				//		printf("\nLISTA ORDENADA: \n");
				//		printArray(arr, n);
						printf("Comparaciones: %d",contador);
					break;
					
					case 6:
					//	printf("Sin ordenar: \n");
					//	printArray(arr, n);
						contador = mergeSort(arr,0,n-1);
				//		printf("\nLISTA ORDENADA: \n");
				//		printArray(arr, n);
						printf("Comparaciones: %d",contador);
					break;
					
					case 7:
						printf("Vuelva pronto\n");				
					break;
			}
		}
}


