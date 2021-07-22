/*#include<stdio.h>
#include<stdlib.h>
#define N 10
typedef struct lista{
	int vetLista[N];
	int qtdDados;

} tipoLista;

		//escropo das funções
int listaVazia(tipoLista *ls);
int listaCheia(tipoLista *ls);
void insereInicio(tipoLista *ls, int valor);
void imprimeLista(tipoLista *ls);
void bubblesort(tipoLista *ls);

int main (){
	tipoLista lista;
	lista.qtdDados=0;
	insereInicio(&lista, 1);
	insereInicio(&lista, 2);
	insereInicio(&lista, 3);
	insereInicio(&lista, 4);
	insereInicio(&lista, 5);
	insereInicio(&lista, 60);
	
	imprimeLista(&lista);
	int i;
	for (i=0; i<lista.qtdDados;i++)
		bubblesort(&lista);

	imprimeLista(&lista);
	

	return 0;
}

		//Implementação das funções//

int listaVazia(tipoLista *ls){
	if ( ls->qtdDados==0){
		printf("A lista está vazia\n");
		return 1;
	}else{
		return 0;
	}
}

int listaCheia(tipoLista *ls){
	if ( ls->qtdDados==N )
		return 1;
	else
		return 0;
}

void insereInicio(tipoLista *ls, int valor){
	if ( listaCheia(ls) == 1 ){
		printf("Impossível inserir um novo valor pois a lista esta cheia");
	}else{
		int i;
		for ( i=ls->qtdDados; i>0; i--){
			ls->vetLista[i]=ls->vetLista[i-1];
		}			
		ls->vetLista[0]=valor;
		ls->qtdDados++;
	}
		
}
void imprimeLista(tipoLista *ls){
	if ( listaVazia(ls)==1 )
		printf("A lista esta vazia\n[].\n");
	else{
		int i;
	printf("A Lista é esta: [");
		for (i=0; i<ls->qtdDados ; i++)
			printf("%d,",ls->vetLista[i]);
		printf("]\n");
	}
}

void bubblesort(tipoLista *ls)
{
	if ( listaVazia(ls)==1 )
		printf("Impossivel ordenar pois lista vazia");
	else
	{
		int i,aux,troca;
		troca=1;
		while (troca==1)
		{
	
			for (i=0; i<ls->qtdDados-1; i++)
			{
				if (ls->vetLista[i]>ls->vetLista[i+1])
				{
					aux=ls->vetLista[i];
					ls->vetLista[i]=ls->vetLista[i+1];
					ls->vetLista[i+1]=aux;
				}
				else
					troca=0;
			}
		}
	}
}
*/
#include<stdio.h>
#include<stdlib.h>
#define N 10
typedef struct lista{
	int vetLista[N];
	int qtdDados;

} tipoLista;

		//escropo das funções
int listaVazia(tipoLista *ls);
int listaCheia(tipoLista *ls);
void insereInicio(tipoLista *ls, int valor);
void imprimeLista(tipoLista *ls);
void selectionSort(tipoLista *ls);

int main (){
	tipoLista lista;
	lista.qtdDados=0;
	insereInicio(&lista, 700);
	insereInicio(&lista, 1000);
	insereInicio(&lista, 100);
	insereInicio(&lista, 600);
	insereInicio(&lista, 900);
	insereInicio(&lista, 400);
	
	imprimeLista(&lista);
	selectionSort(&lista);
	imprimeLista(&lista);
	

	return 0;
}

		//Implementação das funções//

int listaVazia(tipoLista *ls){
	if ( ls->qtdDados==0){
		printf("A lista está vazia\n");
		return 1;
	}else{
		return 0;
	}
}

int listaCheia(tipoLista *ls){
	if ( ls->qtdDados==N )
		return 1;
	else
		return 0;
}

void insereInicio(tipoLista *ls, int valor){
	if ( listaCheia(ls) == 1 ){
		printf("Impossível inserir um novo valor pois a lista esta cheia");
	}else{
		int i;
		for ( i=ls->qtdDados; i>0; i--){
			ls->vetLista[i]=ls->vetLista[i-1];
		}			
		ls->vetLista[0]=valor;
		ls->qtdDados++;
	}
		
}
void imprimeLista(tipoLista *ls){
	if ( listaVazia(ls)==1 )
		printf("A lista esta vazia\n[].\n");
	else{
		int i;
	printf("A Lista é esta: [");
		for (i=0; i<ls->qtdDados ; i++)
			printf("%d,",ls->vetLista[i]);
		printf("]\n");
	}
}

void selectionSort(tipoLista *ls)
{
	int menor,aux;
	for(int i=0;i<ls->qtdDados-1;i++)
	{
		menor=i;
		for(int j=i+1; j<ls->qtdDados;j++)
		{
			if(ls->vetLista[menor]>ls->vetLista[j])
				menor=j;
		}
		if(i!=menor)
		{
			aux=ls->vetLista[i];
			ls->vetLista[i]=ls->vetLista[menor];
			ls->vetLista[menor]=aux;
		}
	}
}
		












