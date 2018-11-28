/* Play.c Andrew Levy */
#include <stdio.h>
#include <stdlib.h>
#include "Life.h"

int play(int x, int y, char**board1, char**board2, char**board3, int gens,
		int print, int pause) {
	int z, j, d;
	int genCount = 0;
	int checkForX;

	for (d = 1; d <= gens; d++) {
		genCount++;

		for (z = 0; z < y; z++) {
			for (j = 0; j < x; j++) {
				board3[z][j] = board2[z][j];
			}

		}


		for (z = 0; z < y; z++) {
			for (int j = 0; j < x; j++) {
				board2[z][j] = board1[z][j];
			}

		}
		//loop goes through array(board 2) and chages each character to the characters of
				//board 1 to change board 2 to become board 1

		if (print == 'y') {
			printArray(x, y, board1);
		}

			checkForX = 0;
			for (z = 0; z < y; z++) {
				for (int j = 0; j < x; j++) {
					if (board1[z][j] == 'X') {
						checkForX++;
					}
				}

			}
			//checks each character in array and adds one to checkforX if
			//the character is an X




		if (checkForX == 0) {
						printf("Terminated due to all cells dead\n");
						break;
					}
		//breaks if entire array is Os


		newBoard(x, y, board1);
		int isBoard1And2Equal = 1;
		int isBoard1And3Equal = 1;

		for (z = 0; z < y; z++) {
			for (j = 0; j < x; j++) {
				if (board3[z][j] != board1[z][j]) {
					isBoard1And3Equal = 0;

				}
				if (board2[z][j] != board1[z][j]) {
					isBoard1And2Equal = 0;

				}

			}

		}
		//checks through all characters in array and determines if the arrays
		//are not equal. If arrays are not equal then a variable to be tested later is set to 0

		if (isBoard1And2Equal) {
			printf("Terminated due to repeat from last generation\n");
			break;
		}
		if (isBoard1And3Equal) {
			printf("Terminated due to repeat from two generation ago\n");
			break;
		}
		//variables tested

		if (d == gens) {
			printf("Terminated due to completed number of generations\n");
		}
		if (pause == 'y') {
			getchar();
		}
	}
	// loop that goes through each generation and does a variety of things
	// changes boards, finds terminations, goes to print function if print argument is y,
	// pauses for a button click if pause argument is y.
	printf("%d generation(s)", genCount);
	return 0;
}
