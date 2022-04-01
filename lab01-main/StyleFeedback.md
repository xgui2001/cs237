# Feedback on Lab 1 checkpoint

In this file, we are providing some feedback on your lab 1 checkpoint's
loop_sum.c and is_palindrome.c files' adherence to the CS237 code guidelines.
We encourage you to incorporate this feedback into your final submission for
lab 1 and for all C code that you submit in this class.

A [+] means your code did this well.  A [~] means your code was
inconsistent and you will want to look for places where this was not
handled as well as possible. A [-] means your code did not
consistently apply this standard.

## Naming (makes code more understandable)
   * [+] Uses camelcase or underscores in naming of variables and
     	 functions and all names start with lowercase letters 
   * [+] Variable names are descriptive and easy to understand
     	 - s is not a descriptive variable name.  Typically, single
	   letter variables should be reserved for loop counter variables.
   * [+] Function names are descriptive and contain a verb

## Whitespace (improves readability)
   * [~] Code is indented consistently
   * [+] Code (including comments) does not exceed 80 chars
   * [+] Operators, commas, and function calls are surrounded by horizontal
     	 whitespace
   * [+] Logical groups of code are separated from one another with vertical
     	 whitespace
   * [+] Functions are separated from one another with vertical whitespace
   * [+] No code appears on the same line after a { 

## Comments (makes code more understandable)
   * [~] Every function is preceded with a comment explaining what the
     	 function does at a high level, what the parameters represent, and
     	 what value is returned for all cases.
	 - C does not use @tags.  It's confusing if you do use them as they
	   are not part of standard C style.
         - isPalindrome comment doesn't explain what head or tail represent.
	 Additionally, the comment shouldn't mention recursion is being
	 used.  Finally, the function determines if a substring, not the
	 string, is a palindrome.
   * [~] main() is preceded with a comment explaining what the program does
     	 at a high level.
	 - Function comments should not reveal implementation details such
	 as what functions get called. 
   * [+] Comments precede the code they are describing (as we read top down)
   * [+] Logical blocks of code have comments (potentially on their own lines)
     	 that explain at a high level what this block of code is doing.
   * [+] Extraneous comments (including those provided in starter code) are
     	 removed.
   * [+] Debugging code is deleted rather than simply commented out.

## Design (makes code easily modifiable and more easily understood)
   * [+] Constant variables are used (#define) in place of literals
   * [+] No global variables are used
   * [+] Creates helper functions to increase code modularity, reuse, and
     	 clarity
   * [+] Output matches expected output and debugging print statements removed
 