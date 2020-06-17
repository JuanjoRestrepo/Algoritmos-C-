#include<iostream>
#include<stdlib.h>

#define T 100

using namespace std;


void mostrarOrden(int A[T], int num_elem){
	cout<<"\n\n*** Array ordenado ***"<<endl;
	for(int i = 0; i < num_elem; i++){
		cout<<A[i]<<" ";
	}
	cout<<endl;
}


void Quicksort(int A[T], int primero, int ultimo){
	
	int central, i, j, pivote;
	central = (primero + ultimo)/2; //Posicion central del Array
	//Capturar el valor del medio del Array
	pivote = A[central];
	//Separar los segmetos
	i = primero;
	j = ultimo;
	
	do{
		//Separando en dos partes el Array
		while(A[i] < pivote) i++; //Separando los valores menores del pivote
		while(A[j] > pivote) j--; //Separando los valores mayores del pivote
		
		if(i <= j){
			int temp;
			//Intercambio de valores
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
			i++;
			j--;
		}
		
	}while(i <= j);
	
	if(primero < j){
		Quicksort(A, primero, j);
	}
	if(i < ultimo){
		Quicksort(A, i, ultimo);
	}
	
}

int main(){
	
	int num_elem, A[T];
	cout<<"Numero de elementos del Array: ";
	cin>>num_elem;
	cout<<"\n*** Ingrese los elementos del Array ***\n"<<endl;
	for(int i = 0; i < num_elem; i++){
		cout<<"A ["<<i<<"] = ";
		cin>>A[i];
	}
	
	cout<<"\n*** Elmentos ingresados en el Array ***"<<endl;
	for(int i = 0; i < num_elem; i++){
		cout<<A[i]<<" ";
	}
	
	Quicksort(A, 0, num_elem-1 );
	mostrarOrden(A, num_elem);
	
	cout<<endl;
	system("pause");
	return 0;	
}


