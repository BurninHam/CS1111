//a program to generate 5 random mathmatical questions for the user to answer
//Alex Burnham
//arburnha@mtu.edu
//9-25-2024

//include three header files to use extra functions
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//ask user how many questions they want
	int equations;
	int answer;
	int c;
	int i;
	int sum;
	c = 0;
	printf("how many questions would you like?\n");
	scanf("%d", &equations);
	//seed our random number
	srand(time(NULL));

	//generates 5 random numbers
	printf("Here are your numbers\n");
	for (i = 0; i < equations; i++)
	{
		//call 1st number between 1-100
		int randomNumber1 = (rand() % 100) + 1;
		printf("%d", randomNumber1);
		//call + or -
		int randomSign = (rand() % 2);
		if (randomSign == 1){
			printf(" +");}
		else {
			printf(" -");}
		//call 2nd number between 1-100
		int randomNumber2 = (rand() % 100) + 1;
        	printf(" %d = ", randomNumber2);
		//scan for user input
		scanf("%d", &answer);
		if(randomSign ==1){
			 sum = randomNumber1 + randomNumber2;}
		else {
			 sum = randomNumber1 - randomNumber2;}
		if (answer == sum)
			{c++;}	
	}
	printf("%d", c);
	printf("/%d\n", i);
	if (c >= i)
		{
		printf("You're soooo smart\n");
		}
	else
		{
		printf("dum dum\n");
		}
	return 0;
}
