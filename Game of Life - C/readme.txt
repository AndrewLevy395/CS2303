Andrew Levy

My program takes in 6 arguments, a height, 
a width, a number of generations, a file of X's and O's, 
a 'y' to print the game or an 'n' to not print the game, 
and a 'y' to click for each generation to print or a 'n' 
for each generation to print when the program runs. These arguments are 
used to print out the game of life. The game of life is a board
of X's and O's which will either thrive or die through generations
based on the number of surrounding X's. The game of life ends when
one of three cases occurs: all characters are dead (0), the pattern 
of characters repeats itself immediately or after 2 iterations, or
if the argument for number of generations is achieved. The reason for
termination ans the number of generations will be printed at the
end of the printed generations.

To run the program, 6 arguments must be given to the program in 
order to determine certain values described in the program description
above.

Some of the problems that I had were working with double Arrays and 
double pointers. Another problem I had was trying to center the 
characters from the file on the board.

LOOP INVARIANTS
board.c:

//loop checks through each character in the given array and prints each
// character

//loop goes through each character in the array, determines it's amount of neighbors,
//and changes its value to B if
//the character is an X and meets one of the conditions to be changed to an O.
//The character changes its value to b if
//the character is an O and meets one of the conditions to be changed to an X.

//checks each character in the array, if character is B then it becomes O
// and if character is B then it becomes X.

Life.c:

//loop goes through each character in array and makes all characters 'O'

//loop goes through each character in file and finds the max height and width
//of all of the characters excluding new line characters
		
//loop goes through each character in the file and places into board1
//but it is placed into the array displaced so that the characters
// are in the center of the board

Play.c

// loop that goes through each generation and does a variety of things
// changes boards, finds terminations, goes to print function if print argument is y,
// pauses for a button click if pause argument is y.

//loop goes through array(board 3) and chages each character to the characters of
//board 2 to change board 3 to become board 2
		
//loop goes through array(board 2) and chages each character to the characters of
//board 1 to change board 2 to become board 1
				
//checks each character in array and adds one to checkforX if
//the character is an X

//checks through all characters in array and determines if the arrays
//are not equal. If arrays are not equal then a variable to be tested later is set to 0
