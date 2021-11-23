#include <stdio.h>
#include <time.h>
int main(){

	time_t currentTime; 	// defining a struct "time_t" and it's var currentTime
	
	char filename[] = "text.txt";
	time(&currentTime);		// address of current time

	printf("%s\n",ctime(&currentTime));	// address of current time returns current time
	
	printf("%s",filename);
	return(0);
}
