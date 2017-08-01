#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
	char nome[180];
	float nota;
}Aluno;

int main(int argc, char const *argv[]){
	FILE *dados_alunos;
	char tupla[200];
	int count = 0, i;
	float media = 0.0;
	Aluno* alunos;
	dados_alunos = fopen("entrada.dat", "r");

	while (fgets(tupla, 200, dados_alunos) != NULL) {
		++count;
	}
	rewind(dados_alunos);
	
	alunos = malloc(count*sizeof(Aluno));
	Aluno *a = alunos;
	printf("Lendo registros...\n");
	while (fgets(tupla, 200, dados_alunos) != NULL) {
		strcpy((*a).nome, strtok(tupla, ";"));
		(*a).nota = atof(strtok(NULL, ";"));
		printf("%s - %.1f\n", (*a).nome, (*a).nota);
		a++;
	}
	printf("Total de Registros: %d\n", count);
	printf("Calculando...\n");
	
	for (i = 0; i < count; ++i){
		media += alunos[i].nota;
	}
	media /= count;
	printf("Media das notas dos alunos: %.1f\n", media);

	free(alunos);
	return 0;
}