#include <stdio.h>
#include <stdlib.h>

int main()
{
char grade;
printf("Please enter your grade below");
scanf("%s" , &grade);
switch (grade)
{
case 'A':
printf("You did very great.");
  
  break;
case 'B':
printf("Not bad");
break;

default:
printf("You flunked!");
  break;
}
  return 0;
}
