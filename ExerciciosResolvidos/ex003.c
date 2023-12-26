/*
 * ex003.c
 *
 *  Criado em: 26 de dez de 2023
 *      Autor: Renato Gomes de Sousa
 *
 *      https://github.com/RenatoEngineer/ExerciciosSecao16
 */

#include <stdio.h>
#include <stdlib.h>

int main(){

	int tamanho;
	char *ponteiro;

	printf("Informe o tamanho da String: ");
	scanf("%d", &tamanho);
	getchar();

	ponteiro = (char*)malloc(sizeof(char) * tamanho + 1); // + 1 para o Enter que tambem eh um caracter

	printf("Informe a String: ");
	fgets(ponteiro, tamanho + 1, stdin);

	for (int i = 0; i <= tamanho; i++){
		if (*(ponteiro + i) != 'a' && *(ponteiro + i) != 'A'
				&& *(ponteiro + i) != 'e' && *(ponteiro + i) != 'E'
				&& *(ponteiro + i) != 'i' && *(ponteiro + i) != 'I'
				&& *(ponteiro + i) != 'o' && *(ponteiro + i) != 'O'
				&& *(ponteiro + i) != 'u' && *(ponteiro + i) != 'U'){
			printf("%c", *(ponteiro + i));
		}
	}

	return 0;
}
