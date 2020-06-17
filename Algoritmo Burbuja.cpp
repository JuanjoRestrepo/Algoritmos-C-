#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {4,1,3,5,2};
	int i, j, aux;
	
	cout<<"Arreglo Desordenado: ";
	for(i = 0; i<5; i++){
		cout<<numeros[i]<<" ";
	}
	
	//Algoritmo Burbuja
	for(i = 0; i<5; i++){
		for(j = 0; j<5; j++){
			if(numeros[j] > numeros[j+1]){
				aux = numeros[j];
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux;
			}
		}
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
