#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <random>
#include "bear.h"
//innit
void bear_innit(char mat[][N],Bear* d) {
	int path[][2] = { 0 };
	int rowplace = rand(3,N-1);
	int colplace = rand(3, N - 1);
	legalBearPlace(mat, d);
	char formerchar = '*';
}
//moves the bear in the matrix
void moveBear(char mat[][N], Bulli* b, Bear* d) {
	// Calculate the direction from bear to Bulii
	int rowDiff = b->rowplace - d->rowplace;
	int colDiff = b->colplace - d->colplace;

	// Determine the next position to move towards Bulii
	int nextRow = d->rowplace + (rowDiff > 0 ? 1 : (rowDiff < 0 ? -1 : 0));
	int nextCol = d->colplace + (colDiff > 0 ? 1 : (colDiff < 0 ? -1 : 0));

	// Check if the next position is within the bounds and not a wall
	if (nextRow >= 0 && nextRow < N && nextCol >= 0 && nextCol < N && mat[nextRow][nextCol] != 'x') {
		// Move the bear
		mat[d->rowplace][d->colplace] = ' ';
		/*if (solve_maze(mat[][N], d->rowplace, d->colplace, d->path[][2], N * N, b, d) {
			d->rowplace = d->rowplace + nextRow;
				d->colplace = d->colplace + nextCol;
				mat[d->rowplace][d->colplace] = 'd';
		}
		else
		{
			printf("Bear wont be able to find Bulli");
				return
		}*/
	}

}
//finds the row place of Bulli
int findBulliR(Bulli* b) {
	return b->rowplace;
}
//finds the col place of Bulli
int findBulliC(Bulli* b) {
	return b->colplace;
}
void legalBearPlace(char mat[][N], Bear* d) {
	while (mat[d->colplace][d->rowplace] == 'x')
	{
		d->colplace = rand(3, N - 1);
		d->rowplace = rand(3, N - 1);
	}
}
int isLegalBear(char mat[][N], Bear* b) {

}
//int solve_maze(char maze[][N], int i, int j, int path[][2], int length, Bulli* b, Bear* d)
//{
//
//	if (maze[i][j] == 'x') return 0;
//
//	if (maze[i][j] == 'X') return 0;
//
//	d->path[length][0] = i; d->path[length][1] = j;
//
//	if (i == b->rowplace && j == b->colplace) return 1;
//
//	maze[i][j] = 'X';
//
//	if (((i < N - 1) && solve_maze(maze, i + 1, j, path, length + 1, b,d)) ||
//		((i > 0) && solve_maze(maze, i - 1, j, path, length + 1, b,d)) ||
//		((j < N - 1) && solve_maze(maze, i, j + 1, path, length + 1, b,d)) ||
//		((j > 0) && solve_maze(maze, i, j - 1, path, length + 1, b,d)))
//		return 1;
//	else {
//		d->path[length][0] = path[length][1] = -1;
//		return 0;
//	}
//}