// This program reads in an integer n from stdin and prints the sum of
// the integers from 1 to n.
#include <stdio.h>

// This function calculates the sum of integers from 1 to n.
// pre: n is positive integer
// post: integers are summed
// param: int n
// return: the sum of the integers from 1 to n
int sumNumbers(int n){
	int sum = 0;
	//for loop to sum the numbers
	for (int i = 0; i <= n; i++){
		sum+=i;
		}
	return sum;
}

// This main function reads in an integer n from stdin, calls sumNumbers
// and prints the the sum of the integers from 1 to n.
// pre: n is positive integer
// post: prints the sum of the integers from 1 to n, or a string indicating error
// param: int argc, char *argv[]
// return: 0
int main(int argc, char *argv[]) {
	int n = 0;

	//$ should check to make sure scanf reads exactly one value
	// uses scanf to read in integer n
	scanf("%d", &n);
	// check if n is a positive integer
	if (n > 0){
		printf("Sum is %d\n", sumNumbers(n));
	}
	else{
		printf("You did not enter a positive integer!\n");
	}
	return 0;
}
