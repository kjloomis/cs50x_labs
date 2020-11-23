# Week 2B - Scores

Remember that each week you will be given a hands-on activity that should be
done using pair  programming. This week you will be randomly assigned a
partner from list of students in your section. Find your partner and use pair
programming to solve the problem. I would suggest that you choose the student
with the least familiarity with coding to be the "driver". Get some help from
the Teaching Fellow if needed. - Ken Loomis

## Part I
Your task for this week is to create a program (called "scores.c") which will
collect an unknown number of homework scores for a single student. These
scores should be positive numbers and may contain decimal values, but will
never be greater than 100 or less than 0. All the scores should be collected
and placed in an array so that they can be used to perform calculations. You
may assume that the user will never enter more than 10 scores. The user will
indicate that there are no more scores to enter by entering a negative number.
Display the scores entered in         a tabular way so that each score will
have 2 decimal places displayed.

Example Execution:
```
Enter a score: ?.??
Enter a score: ?.??
…
Enter a score: -1


Scores:
  ?.??   ?.??   ?.??   ?.?? ...
```

Hint: To display number in a tabular way, use printf ( "%#.#f\t", n ); where
the first # is replaced with the number of characters that should be reserved
for the decimal number and the second # is the number of decimal places to
display.

## Part II
Once you have created a program that will accept the scores, create a file
that contains some scores (one per line) in it and name it "test.dat". Don’t
forget to put a -1 on the last line. This can then be used for testing your
program without entering in the numbers repeatedly. Just use the trick you
learned previously for redirecting output into your program.

```
./scores < test.dat
```

## Part III
Perform some calculations on the inputted scores from part I and produce
output based upon those calculations. While it is possible to do some of
these calculations while collecting the user input, practice creating a
separate loop which performs the calculations after all the input is
collected. Do as many of these calculations as you can and output each with
2 decimals displayed…
* Determine the highest score.
* Determine the lowest score.
* The average score.
* The average with the lowest score dropped.