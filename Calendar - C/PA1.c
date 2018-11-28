/* PA1.c -- Andrew Levy */
#include <stdio.h>

int isLeapYear(year4){
  if(year4 % 4 == 0){
    if(year4 % 100 == 0){
       if(year4 % 400 == 0){
         return 1;
       }
       else{
         return 0;
       }
    }
    else{
      return 1;
    }
  }
  else{
    return 0;
  }
} 

int firstDayOfMonth(year5){
  int firstDay = 1;
  for(int i=1; i<year5; i++){
    if(isLeapYear(i) == 1){
      firstDay = firstDay + 366;
    }
    else{
      firstDay = firstDay + 365;
    }
  }

/* i increments from 1 to the inputted year and each increment counts the number of days in the year and finds the remainder
to determine the first day of the next year */

  return firstDay % 7 + 1;
}

int printMonthName(int year1, int month1){
int leap = isLeapYear(year1);
  switch(month1){
    case 1: printf("January %d\n", year1);
            return 31;
    break;
    case 2: printf("February %d\n", year1);
            if(leap == 0){
              return 28;
            }
            else{
              return 29;
            }
    break;
    case 3: printf("March %d\n", year1);
	    return 31;
    break;
    case 4: printf("April %d\n", year1);
	    return 30;
    break;
    case 5: printf("May %d\n", year1);
	    return 31;
    break;
    case 6: printf("June %d\n", year1);
	    return 30;
    break;
    case 7: printf("July %d\n", year1);
	    return 31;
    break;
    case 8: printf("August %d\n", year1);
	    return 31;
    break;
    case 9: printf("September %d\n", year1);
	    return 30;
    break;
    case 10: printf("October %d\n", year1);
	    return 31;
    break;
    case 11: printf("November %d\n", year1);
	    return 30;
    break;
    case 12: printf("December %d\n", year1);
	    return 31;
    break;
  }
}

int printMonth(int year3, int month3, int day3){
  int dayOfMonth = 1;
  int dayAmount = printMonthName(year3, month3);
  int dayOfWeek = firstDayOfMonth(year3);
  printf("Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
      for(int i=1;dayOfMonth<= dayAmount;i++){
	if(i>=day3){        
	  if(i % 7 == 0){
            printf("%3d  \n", dayOfMonth);
            dayOfWeek = 0;
	    dayOfMonth = dayOfMonth + 1;
          }    

          else{
            dayOfWeek = dayOfWeek + 1;
            printf("%3d  ", dayOfMonth);
            dayOfMonth = dayOfMonth + 1;
          }
	}
        else{
          printf("     ");
      }
    }

/* i increments from 1 to the last day of the month, which varies based on the given month. For each increment the loop adds space until the i is equal to the day that
the month begins. Then the loop prints each day and if the day of the week is Sunday(7) then the next print is on the next line */

  printf("\n\n");
  return dayOfWeek;
}

int printCalendar(int year2){
	int day = firstDayOfMonth(year2);
  for(int i=1; i<=12; i++){
    day = printMonth(year2, i, day);
    }

/* i increments from 1 to 12, one time for each month. Each loop prints the calendar for that month. */

}

int main(void){
  //firstDay = 
  int y;
  printf("Enter a year ");
  scanf("%d", &y);
  printCalendar(y);
}

/****
CALENDAR for reference
***
January 
Sun Mon Tue Wed Thu Fri Sat
                  1   2   3
  4   5   6   7   8   9  10
 11  12  13  14  15  16  17
 18  19  20  21  22  23  24
 25  26  27  28  29  30  31

for(int i=0;i<12;i++){
*/


