/*
 * ex001.c
 *
 *  Criado em: 26 de dez de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao16
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int vetor[5];
	int *ponteiro;

	ponteiro = (int*)malloc(sizeof(vetor));

	for (int i = 0; i < 5; i++){
		printf("Digite o Valor %d de 5: ", i + 1);
		scanf("%d", &ponteiro[i]);
	}

	printf("\n");

	for (int i = 0; i < 5; i++){
		printf("Valor na posicao %d do Vetor: %d\n", i, ponteiro[i]);
	}

	free(ponteiro);
	ponteiro = NULL;

	return 0;
}
