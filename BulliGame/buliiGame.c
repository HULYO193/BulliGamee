#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include "bear.h"
#include "bulii.h"
/*------------------Operands------------------*/
/*
	mat- a board with NxN places.
	'x' -> wall - cannot walk over it
	'*' -> score point - when bulli walks over it , it'll change into ' 'after bulli goes to another place
						 bullis score will increase by 1 every time he walks over it.
						 when bear walks over it , nothing will happen
	' ' -> empty place - an empy place that can be walked over.
						 nothing will change after the bear/ bulli are going to the next place.

*/

int main() {

	return 0;
}

//prints the mat
void print_mat(char mat[][N],Bulli* b,Bear* d) {
	int i, j;
	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if(i == b->rowplace && j == b->colplace)
				printf("\t %c", 'b');
			else if (i == d->rowplace && j == d->colplace)
				printf("\t %c", 'd');
			else
				printf("\t %c", &mat[i][j]);
		}
		printf("\n");
	}
}