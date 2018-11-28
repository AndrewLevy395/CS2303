/* board.c Andrew Levy */
#include <stdio.h>
#include <stdlib.h>
#include "Life.h"

void printArray(int x, int y, char**A) {
//prints the board for any array given
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			printf(" %c", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
//loop checks through each character in the given array and prints each
// character

void newBoard(int x, int y, char**A) {
//changes board 1 by implementing the rules of life



	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {

			int neighbors = 0;
//check for neighbors
			for (int m = -1; m < 2; m++) {
				for (int n = -1; n < 2; n++) {

					if (!(i + m < 0 || j + n < 0 || i + m >= y || j + n >= x)) {
						if (!(n == 0 && m == 0)) {
							if (A[i + m][j + n] == 'X') {

								neighbors = neighbors + 1;
							} else if (A[i + m][j + n] == 'B') {

								neighbors = neighbors + 1;

							}
						}
					}

				}

			}
//changes letter depending neighbors
			if (neighbors <= 1 && A[i][j] == 'X') {

				A[i][j] = 'B';
			} else if (neighbors >= 4 && A[i][j] == 'X') {

				A[i][j] = 'B';
			} else if (neighbors == 3 && A[i][j] == 'O') {

				A[i][j] = 'b';
			}
		}

	}
	//loop goes through each character in the array, determines it's amount of neighbors,
	//and changes its value to B if
	//the character is an X and meets one of the conditions to be changed to an O.
	//The character changes its value to b if
	//the character is an O and meets one of the conditions to be changed to an X.

	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			if (A[i][j] == 'B') {
				A[i][j] = 'O';
			} else if (A[i][j] == 'b') {
				A[i][j] = 'X';
			}

		}

	}
	//checks each character in the array, if character is B then it becomes O
	// and if character is B then it becomes X.
}

