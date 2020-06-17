#include<iostream>

using namespace std;

int main(){
	
	int arreglo[] = {3,4,2,1,5};
	int i, dato;
	char band = 'F';
	
	//Algoritmo Busqueda Secuencial
	dato = 5;
	i = 0;
	while ( (band == 'F') && (i < 5) ){
		//cout<<"Dato #"<<i+1<<": "<<arreglo[i]<<endl;
		if(arreglo[i] == dato){
			band = 'V';
			break;
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"Dato no encontrado"<<endl;
	}
	else{
		cout<<"El dato ha sido encontrado en la posicion: "<<i<<endl;
	}
	
	return 0;
}
