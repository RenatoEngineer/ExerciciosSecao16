/*
 * ex002.c
 *
 *  Criado em: 26 de dez de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao16
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int quantidade, *ponteiro;

	ponteiro = (int*)malloc(3 * sizeof(int));

	printf("Informe quantos Valores deseja Cadastrar: ");
	scanf("%d", &quantidade);

	if (quantidade > 3){
		ponteiro = (int*)realloc(ponteiro, sizeof(int) * quantidade);
	}

	for (int i = 0; i < quantidade; i ++){
		printf("Imforme o Valor %d de %d: ", i + 1, quantidade);
		scanf("%d", &ponteiro[i]);
	}

	printf("\n");

	for (int i = 0; i < quantidade; i++){
		printf("Na posicao %d temos o valor: %d\n", i, ponteiro[i]);
	}

	return 0;
}
