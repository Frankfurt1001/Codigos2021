#include <stdio.h>
#define N 10

int main(int argc, char *argv[]) {
	int tmp;
	// legajo, nota
	int mat[N][2] = {
	{4000, 10},
	{5000, 4},
	{1030, 10},
	{6000, 5},
	{2200, 10},
	{1040, 4},
	{2020, 4},
	{1000, 6},
	{4300, 1},
	{4040, 1},
	};
	
	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < N-1-i; j++) {
			if (mat[j][1] > mat[j+1][1]) {
				for (int k = 0; k < 2; k++) {
					tmp = mat[j][k];
					mat[j][k] = mat[j+1][k];
					mat[j+1][k] = tmp;
				}
			} 
			else 
			{
				if (mat[j][1] == mat[j+1][1]) {
					if (mat[j][0] > mat[j+1][0]) {
						tmp = mat[j][0];
						mat[j][0] = mat[j+1][0];
						mat[j+1][0] = tmp;
					}
				}
			}
		}
	}
	printf("Ordenamiento de menor a mayor con notas iguales\n\n");
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", mat[i][0], mat[i][1]);
	}
	printf("\n\n");
	
	printf("Ordenamiento de menor a mayor segun los Legajos\n\n");
	for (int i = 0; i < N-1; i++) {
		for (int j = 0; j < N-1-i; j++) {
			if (mat[j][0] > mat[j+1][0]) {
				tmp = mat[j][0];
				mat[j][0] = mat[j+1][0];
				mat[j+1][0] = tmp;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		printf("%d %d\n", mat[i][0], mat[i][1]);
	}
	return 0;
}

