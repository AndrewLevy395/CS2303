/* Life.c Andrew Levy */
#include <stdio.h>
#include <stdlib.h>
#include "Life.h"

void fillArray(int x, int y, char**board) {
	for (int i = 0; i < y; i++) {
		for (int j = 0; j < x; j++) {
			board[i][j] = 'O';
		}
	}
	//loop goes through each character in array and makes all characters 'O'
}

	int main(int argc, char*argv[]) {

		int x = atoi(argv[1]);
		int y = atoi(argv[2]);
		int gens = atoi(argv[3]);
		char all = *argv[5];
		char pause = *argv[6];

		char** board1 = malloc(y * sizeof(char*));
		for (int i = 0; i < y; i++) {
			board1[i] = malloc(x * sizeof(char));

		}
		char** board2 = malloc(y * sizeof(char*));
		for (int i = 0; i < y; i++) {
			board2[i] = malloc(x * sizeof(char));

		}
		char** board3 = malloc(y * sizeof(char*));
		for (int i = 0; i < y; i++) {
			board3[i] = malloc(x * sizeof(char));

		}

		fillArray(x,y,board1);

		FILE*input;
		input = fopen(argv[4], "r");

		if (!input) {
			perror("unable to open");
		}

		int i = 0;
		int j = 0;
		int maxHeight = 0;
		int maxWidth = 0;
		char lastRead = 'a';
		char c = 'a';
		int heightOffset = 0;
		int widthOffset = 0;


		int currentCount = 0;
//counts the max height and width of given file
		while (1) {
			c = fgetc(input);
			if (c < 0) {
				if (maxWidth < currentCount) {
					maxWidth = currentCount;
				}
				break;
			} else if (c == '\n') {
				maxHeight++;

				if (maxWidth < currentCount) {
					maxWidth = currentCount;
				}
				currentCount = 0;
				if (lastRead == '\n') {
					maxHeight = maxHeight - 1;
				}
				lastRead = '\n';
			} else {
				currentCount++;
				lastRead = 'c';

			}

		}
		//loop goes through each character in file and finds the max height and width
		//of all of the characters excluding new line characters

		fclose(input);
		input = fopen(argv[4], "r");

// determine offset for centering
		heightOffset = ((y - maxHeight) / 2);
		widthOffset = ((x - maxWidth) / 2);
// center and add to board
		while (!(i >= x && j >= y)) {
			c = fgetc(input);
			if (c < 0) {
				break;
			}
			if (c == '\n') {
				i++;
				j = 0;

			} else {
				board1[i+heightOffset][j+widthOffset] = c;
				j++;

			}
		}
		//loop goes through each character in the file and places into board1
		//but it is placed into the array displaced so that the characters
		// are in thr center of the board
		fclose(input);

//play game of life
		play(x, y, board1, board2, board3, gens, all, pause);

		return 0;
	}

