#include<stdio.h>
#include<stdlib.h>

void merge_sort(int *st, int tamanho);
void merge(int *st, int tamanho);

int main (){ 
    int x;
    printf("digite o tamanho do vetor");
    scanf("%d",&x);
    int vet[x];
    return 0;
}



void merge_sort(int *st, int tamanho){
	int meio;
	if(tamanho > 1){
		meio = tamanho / 2;
		merge_sort(st, meio);
		merge_sort(&st[meio], (tamanho-meio));
		merge(st, tamanho);
	}
}

void merge(int *st, int tamanho){
	int *vetAux,cont=0;
	vetAux = (int*)malloc(sizeof(int) * tamanho);
	int i, j, meio, posVetAux;
	
	meio = j = tamanho / 2;
	i = 0;
	posVetAux = 0;
	cont++;
	while((i < meio) && (j < tamanho)){
		cont++;
		if(st[i] < st[j]){
			vetAux[posVetAux] = st[i];
			i++;
		}else{
			vetAux[posVetAux] = st[j];
			j++;
		}
		posVetAux++;
	}
	cont++;
	while(i < meio){
		vetAux[posVetAux] = st[i];
		posVetAux++;
		i++;
	}
	while(j < tamanho){
		vetAux[posVetAux] = st[j];
		posVetAux++;
		j++;
	}
	for(i = 0; i < tamanho; i++){
		st[i] = vetAux[i];
	}
	free(vetAux);
}