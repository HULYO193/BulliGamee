#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include "bulii.h"

//innit
void bulli_innit(Bulli* b) {
	
	inputPlace(b);
	b->score_eat = 0;
	b->last_move = 0;
}
//moves the bulli in the mat - dir goes from 1-4 and each one of them is thre diraction the bulli goes(switch case)
void makeMove(char mat[][N], Bulli* b, int dir) {
	while (!isLegalBulli(mat, b, dir))
	{
		printf("not a leagl move, try again.\n");
		printf("please enter a new diraction(1-4):\n");
		scanf("%d", &dir);
	}
	b->last_move = dir;
	if (mat[b->rowplace + xdir[dir]][b->colplace + ydir[dir]] == '*')
		bulliEat(mat, b);
	mat[b->rowplace + xdir[dir]][b->colplace + ydir[dir]] = 'b';
	mat[b->rowplace][b->colplace] = '_';
	b->rowplace = b->rowplace + xdir[dir];
	b->colplace = b->colplace + ydir[dir];
	b->last_move = dir;
}
//moves to the place decided and if there is a * the bulli will eat it and increase its score, if not , it wont increase
void bulliEat(char mat[][N], Bulli* b) {
	b->score_eat += 1;
	mat[b->rowplace][b->colplace] = '_';
}
//sets the place for the bulli to start the maze
void inputPlace(Bulli* b) {
	while ((b->colplace < 2 && b->colplace > N - 1) && (b->rowplace < 2 && b->rowplace > N - 1))
	{
		printf("please enter a placement for bulli( legal placements are %d <-> %d(included):\n",2,N-3);
		printf("please chhose the row num of the place you want to put bulli in:\n");
		scanf("%d", b->rowplace);
		printf("please chhose the col num of the place you want to put bulli in:\n");
		scanf("%d", b->colplace);
	}
}
//see's if the move is leagal for the bulli
int isLegalBulli(char mat[][N], Bulli* b, int dir) {
	return ((dir <= 4 && dir >= 1) && (b->rowplace + xdir[dir] <= N - 2 && b->colplace + ydir[dir] <= N - 2)
		&& mat[b->rowplace + xdir[dir]][b->colplace + ydir[dir]] != 'x');
}