
//simultation of a game of chance
//-number guessing game
//-use while loop +if else 


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main () {
int secret, guess;
int attempts=0;
srand(time(0));
secret=rand()%10+1;
printf("guess the number between 1 and 10\n");
while (1){
	printf("enter your guess");
	scanf("%d",&guess);
	attempts++;
	if(guess>secret){
		printf("too high ! try again");
	}
	else if(guess<secret){
		printf("too low ! try again");
	}
	else{
		printf("congratulations !you guess correctly");
		printf("total attempts is %d\n",attempts);
		break;
	}
}
	return 0;
}