# Week 2 - Char Checker

Remember that each week you will be given a hands-on activity that should
be done using pair  programming. This week you will be randomly assigned
a partner from list of students in your section. Find your partner and use
pair programming to solve the problem. I would suggest that you choose the
student with the least familiarity with coding to be the "driver". Get some
help from the Teaching Fellow if needed. - Ken Loomis

## Part I
Your task for this week is to create a program that will take in some piece of
text and count the number of types of characters that appear in that text.
Name your source code "charChecker.c". You should count the following types of
characters:
* Uppercase letters.
* Lowercase letters.
* Numbers.
* End punctuation (!, ?, .)
* Spaces
* And Other Characters (everything else)
An example of the execution of this program appears below. Notice that you do
not have an algorithm that solves this problem, so it may be beneficial for you
to write a brief algorithm before you start coding.

Example:
```
Enter the text: Hello, wor1d!
        Uppercase: 1
        Lowercase: 8
        Numbers: 1
        End Punctuation: 1
        Spaces: 1
        Other: 1
```

Try to make sure you you produce the output exactly as it appears above, so
that you get used to using more features of collecting input and producing
output. Notice that there is a "1" (one) in place of the "l" (el) that you
might expect to enter in "world" which accounts for the count of 1 number
in the input.

# Part II
Since we want to run this program on a meaningful piece of text, we should
add an additional input trap at the start of the program which prevents the
user from entering some text which contains few or no characters. Check the
input to make sure that it contains at least 5 characters before producing
any output. Write this input trap as a "do-while" loop. Here is some syntax
for this type of loop.

```
do
{
        <some instructions>
}
while ( <condition> );
```

# Part III
Your teaching fellow will provide you with an additional text file which
includes some text that you can use to test your program. Instead of typing
in the text, you can instead redirect the text from your file into the program.
Put this file ("turing.dat") in you CS50 IDE in the same folder as your program.

To use the text within the file as input for the program we will use this
redirection feature available in Linux:
```
./charChecker < turing.dat
```

Instead of needing to type the very large block of text in to test your program,
you will instead redirect the data into the file to the input stream in place
of your keyboard input. You won’t see the input in the console, but you can
always open the file to see what is inside. The output that your program
produces should now be the the counts of the different types of characters
located in that file.