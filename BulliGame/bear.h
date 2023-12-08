/* bear.h - an interface for the bear */

#ifndef BEAR_H
#define BEAR_H
#include "bulii.h"
/************** CONSTANTS ****************************/
#pragma warning(disable:4996)

/************** TYPES ********************************/


/* bulli type */
typedef struct
{
	int path;
	int rowplace;
	int colplace;
	char formerchar;

} Bear;
//innit
void bear_innit(char max[][N],Bear* d);
//moves the bear in the matrix
void moveBear(char mat[][N], Bulli b, Bear d);
//finds the row place of Bulli
int findBulliR(Bulli b);
//finds the col place of Bulli
int findBulliC(Bulli b);
void legalBearPlace(char mat[][N], Bear* d);
int isLegalBear(char mat[][N], Bear* b);
#endif