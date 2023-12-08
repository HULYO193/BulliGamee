/* bulli.h - an interface for the bulli */

#ifndef BULLI_H
#define BULLI_H
#define N 22
/************** CONSTANTS ****************************/
#pragma warning(disable:4996)

/************** TYPES ********************************/
/* vaector arrays that will help bulli and bear move arount the mat
Inputs-    0    1,2,3,4
directions-0   ,N,E,S,W,NE,NW,SW,SE */
int xdir[] = { 0,-1,0,1,0,-1,-1,1,1 };
int ydir[] = { 0,0,-1,0,1,-1,1,1,-1 };
/* bulli type */
typedef struct
{
	int rowplace;
	int colplace;
	int score_eat;
	int last_move;
} Bulli;
//innit
void bulli_innit(Bulli* b);
//moves the bulli in the mat - dir goes from 1-4 and each one of them is thre diraction the bulli goes(switch case)
void makeMove(char mat[][N], Bulli* b, int dir);
//moves to the place decided and if there is a * the bulli will eat it and increase its score, if not , it wont increase
void bulliEat(char mat[][N], Bulli* b);
//sets the place for the bulli to start the maze
void inputPlace(char mat[][N], Bulli* b);
//see's if the move is leagal for the bear or the bulli
int isLegalBulli(char mat[][N], Bulli b);
#endif