#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {4,2,3,5,1};
	int pos, aux;
	
	cout<<"\nArreglo Desordenado: ";
	for(int i = 0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	//Algoritmo Ordenamiento Por Insercion
	for(int i = 0; i < 5; i++){
		pos = i;
		aux = numeros[i];
		
		while(pos > 0 && numeros[pos-1] > aux){
			numeros[pos] = numeros[pos-1];
			pos--;
		}
		numeros[pos] = aux;
	}
	
	
	cout<<"\nOrden Ascendente: ";
	for(int i = 0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(int i = 4; i>=0; i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
