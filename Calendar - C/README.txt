
Andrew Levy

This program asks the user to input a year and then prints a calendar of the 
given year. In order to create this I had to make my program determine the 
starting day of the month, determine whether or not the month was a leap 
year, and then I had to print the calendar based off of the year. 

To determine 
the starting day I figured out the starting day of year 1 (Monday). Then 
I added a function that added all of the days in the years prior to the given 
year and then found the remainder when divided by 7, which signified 
the starting day of the given year. 

To determine if the leap year I used the formula given in class, which
was that every four years are leap years except for multiples of 100.
Multiples of 400 are also leap years.

To print the full year calendar, I printed a month calendar and looped 
that 12 times to make the calendar for the full year.

The command used to run the program is ./PA1

A problem that I faced was that my calendar would start on a Sunday every day
when the year was supposed to start on a Saturday. I fixed this by increasing
the iteration of each day of the week. (i.e. Saturday went from 0 to 1).

The problem I faced because of the solution to the previous problem was that 
every day became one day off. To solve this I added 1 to the reminder of the 
starting day of the year algorithm.

LOOP INVARIANTS:

/* i increments from 1 to the inputted year and each increment counts the number of days in the year and finds the remainder
to determine the first day of the next year */

/* i increments from 1 to the last day of the month, which varies based on the given month. For each increment the loop adds space until the i is equal to the day that
the month begins. Then the loop prints each day and if the day of the week is Sunday(7) then the next print is on the next line */

/* i increments from 1 to 12, one time for each month. Each loop prints the calendar for that month. */
