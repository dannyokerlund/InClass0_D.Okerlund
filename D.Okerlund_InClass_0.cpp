/* In Class 0
Danny Okerlund
8/28/23
Takes in a max num and step size and creates an array that counts
*/

#pragma warning (disable: 4996)
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//functions here
int* arraycount(int, int);

int main(void)
{
		//Declare Variables
		int stepsize, maxnum;

		//User Input
		printf("Enter the step size: \n");
		scanf("%i", &stepsize);					//takes in step size and stores as an integer

		printf("Enter the max number: \n");
		scanf("%i", &maxnum);					//takes in max num and stores as an integer

		//simple print statement to make it look pretty
		printf("We are counting to %i, by intervals of %i:\n", maxnum, stepsize);

		//Calling Function
		int* array1 = arraycount(stepsize, maxnum);

		//Printing the array contents
		for (int i = 0; i <= maxnum / stepsize; ++i) {
			printf("%d ", array1[i]);
		}
		printf("\n");

		free(array1);
			
	return 0;
}

//Function
int *arraycount(int stepsize, int maxnum) {
	//Array Size
	int countSize = maxnum / stepsize + 1;
	int* steps = (int*)malloc(countSize * sizeof(int));

	//Insert into Array
	for(int i = 0; i < countSize; i++) {
		steps[i] = i * stepsize; }

	return steps;	//return pointer
}


