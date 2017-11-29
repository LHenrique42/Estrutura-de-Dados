//Algoritmo de ordena��o em mem�ria prim�ria - Insertion Sort

//************ FUNCIONANDO ***************

#include<stdio.h>

#define MAXN 1010 //Define MAXN com 1010

void insertionSort (int vet[], int tam){ //Implementa��o da fun��o Insertio Sort
	int aux, i, j;

	for (i=1; i <tam; i++){
		aux = vet[i];
		j= i-1;
		while (aux< vet[j] && j>= 0){
			vet[j+1] = vet[j];
			j--;
		}
		vet[j+1] = aux;
	}

}

void printfVetor(int vet[], int tam){ //Fun��o para printar 
	int i;

	printf("Vetor Organizado: ");
	for (i=0; i< tam; i++){
		printf("%d ", vet[i]);
	}
	printf("\n");
}

int main(){

	int n, vetor[MAXN]; // declaro as vari�veis que usarei
	int i; //Variaveis do for's

	printf("Insira o tamanho do vetor: ");
	scanf("%d", &n); // leio o valor de n
	
	printf("Insira os valores do vetor: ");
	for(i=0; i<n; i++){
		scanf("%d", &vetor[i]); // leio os n n�meros do vetor
	}
	
	//Chamada de fun�oes 
	insertionSort (vetor, n);
	printfVetor(vetor, n);

	return 0;
}
