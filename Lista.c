/*
 * Lista.c
 *
 *  Created on: 26 de dez de 2016
 *      Autores: MACHADO-AXE - FRANCISCO PIRES JUNIOR.
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Lista.h"

//Funções para as Palavras
lPalavras* criaListPalavras()
{
	return NULL;
}
lPalavras* inserePalavras(lPalavras* pp, char* palavra)
{
	lPalavras* novoP;
	novoP = (lPalavras*)malloc(sizeof(lPalavras*));
	strcpy(palavra, novoP->palavras);
	//novoP->proxPalavra = pp;
	pp=novoP;
	return novoP;
}
void imprime(lPalavras* pp)
{
	//lPalavras* pri;
	//for(pri = pp; pri != NULL; pri = pri->proxPalavra){
		//printf("%s\n", pri->palavras);
	//}

}
lPalavras* buscaPalavras(lPalavras* pp, char* palavra)
{
	/*
	lPalavras* aux;
	for(aux = pp; aux != NULL; aux = aux->palavras){
		if(strcmp(palavra, pp->palavras)){
			return aux;
		}
	}*/
	return NULL;
}

//Funções para Quantidades
lQt* ciraQt(lQt* pq, lPalavras* pp, char* palavra)
{
	//pq->proxPalavra = buscaPalavras(pp, palavra);
	return NULL;
}
lQt* inseri_Quant_Lin(lQt* pq, lPalavras* pp, int linha)
{
	lQt* novoQ;
	novoQ = (lQt*)malloc(sizeof(lQt*));
	novoQ->numLinhas = linha;
	novoQ->proxQuanti = pq;
	pq=novoQ;
	//pq->proxPalavra = pp;
	return novoQ;
}

//Funções de funcionamento
void soma_quant(lQt* pq, lPalavras* pp)
{
	//Corrigir isso aqui
	//if(pq->proxPalavra->palavras == pp->palavras){
		pq->quantVezes++;
	//}
}
void lerArquivo (char *pCaractere)
{
	char caractere;
	int i = 0;
	char palavra[1000];

	FILE *arquivo;
	arquivo = fopen("J:\\Ciência da Computação UFRR\\Semestre 2016.2\\Estrutura de Dados\\TRABALHO PRATICO I\\Artefato 2\\texto.txt", "r");
	if (arquivo == NULL){
		printf("!!!   ERRO AO ABRIR O ARQUIVO  !!!");
		exit(1);
    }
	char *result = fgets(palavra,1000,arquivo);
	caractere = '\0';
	if(result != EOF){
		while(caractere != ' '){
			i++;
			result = fgets(palavra,1000,arquivo);
		}
		//caractere = '\0';
		strcpy(result , pCaractere);
	}

	 fclose(arquivo);
}
