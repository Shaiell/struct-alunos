#include "pch.h"
#include <iostream>


struct alunos {
	char nome[50];
	float nota1=0, nota2=0, pextra=0, media=0;
};

int main()
{
	struct alunos a[3];
	int x;
	setlocale(LC_ALL, "Portuguese");

	for (x = 0; x < 3; x++) {

		printf("informe o nome da %iª pessoa: ", x + 1);
		gets_s(a[x].nome);
		printf("informe a 1ª nota : ");
		scanf_s("%f", &a[x].nota1);
		printf("informe a 2ª nota : ");
		scanf_s("%f", &a[x].nota2);
		printf("informe os pontos extras : ");
		scanf_s("%f", &a[x].pextra);
		getchar();
	}

	for (x = 0; x < 3; x++) {
		
		a[x].media = (a[x].nota1 + a[x].nota2) / 2;
		a[x].media = a[x].media + a[x].pextra;
		if (a[x].media > 10) {
			a[x].media = 10;
		}
		
	}

	for (x = 0; x < 3; x++) {

		printf("O aluno %s, teve media de %.2f\n", a[x].nome, a[x].media);
	}
}


