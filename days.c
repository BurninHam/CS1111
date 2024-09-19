//program designed to tell day of week based off of date.
#include <stdio.h>
//Define all variables.
int Y, y, c, d, m, w;
int main()
{
//asks user to input the date
printf("What is today's date?\n");
scanf("%d/%d/%d",&m,&d,&Y);
//to make sure input dates are useable
while (m>14){m -=12;}
while (m<3){m +=12;}
if (m>12){Y-=1;}
c = (int)(Y/100);
y = (int)(Y-c*100);
//calculates day of the week
w = (((int)(13*(m + 1)/5)) + (int)(y/4) + (int)(c/4) + d + y -2*c) % 7;
//if function for w to declare day of week
if (w==0){
printf("It's saturday\n");}
else if (w==1){
printf("It's sunday\n");}
else if (w==2){
printf("Its monday\n");}
else if (w==3){
printf("It's tuesday\n");}
else if (w==4){
printf("It's Wednesday\n");}
else if (w==5){
printf("Its Thursday\n");}
else if (w==6){
printf("Its Friday\n");}
else{
printf("womp womp\n");}
return 0;
}
