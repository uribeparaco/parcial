#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numeros[] = {29,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,30};
	int A,B,aux;
	
	
	//algoritmo  
	for(A=0; A<30;A++){
		for(B=0; B<30;B++){
			if(numeros[B] > numeros [B+1]){
				aux = numeros[B];
				numeros[B] = numeros [B+1];
				numeros[B+1] = aux;
			}
		}
	}
	
	cout<<"PRIMER ENTRAGA DE PARCIAL\n ";
	cout<<"\nORDEN ASCENDENTE DE 1 A 30 : ";
	for (A=0; A<30; A++){
		cout<<numeros[A]<<" ";
	}
	cout<<"\nORDEN DESCENDENTE DE 30 A 1:  ";
	for (A=29; A>=0; A--){
		cout<<numeros[A]<<" ";
	}
	
	getch();
	return 0;
}
	
	
	
	

	

	
	

