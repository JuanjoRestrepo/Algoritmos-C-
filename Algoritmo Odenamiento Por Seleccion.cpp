#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {4,1,3,5,2};
	int i, j, aux, min;
	
	cout<<"\nArreglo Desordenado: ";
	for(int i = 0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	
	//Algoritmo Ordenamiento por Seleccion
	for(i = 0; i < 5; i++){
		min = i;
		for(j = i+1; j<5; j++){
			if(numeros[j] < numeros[min]){
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	cout<<"\nOrden Ascendente: ";
	for(i = 0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(i = 4; i>=0; i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
