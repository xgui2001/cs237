// This program reads in string s from stdin and determines
// if it is a palindrome.
#include <stdio.h>
#include <string.h>
#define LENGTH 50

// This function recursively determines if a substring is a palindrome.
// pre: s is shorter than 50
// post: s's status as a palindrome is correctly determined
// param: char *s, int head (the counter that keeps track of the first
// character of the substring), int tail (the counter
// that keeps track of the last character of the substring)
// return: 1 if s is a palindrome, 0 if s is not a palindrome
int isPalindrome(char *s, int head, int tail)
{
	// base case: if string is only 1 character long
	if (tail - head <= 0)
	{
		return 1;
	}
	else
	{
		// if the first and the last character of the string is the same
		if (s[head] == s[tail])
		{
			// increment the head counter and decrement the tail counter
			head++;
			tail--;
			// run the function on the new substring
			return isPalindrome(s, head, tail);
		}
	}
	return 0;
}

// This function reads in a string s from stdin and determines if s is a palindrome.
// pre: s is shorter than 50
// post: s's status as a palindrome is correctly determined
// param: int argc, char *argv[]
// return: 0
int main(int argc, char *argv[])
{
	// set max length of string
	char s[LENGTH];
	printf("Enter a string: \n");
	// uses scanf to read in string s
	scanf("%s", s);
	// determine if the substring created from s is a palindrome
	if (isPalindrome(s, 0, strlen(s) - 1) == 1)
	{
		printf("%s is a palindrome\n", s);
	}
	else
	{
		printf("%s is not a palindrome\n", s);
	}
	return 0;
}
