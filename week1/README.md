# Week 1 - Chat Bot

Each week you will be assigned an activity to do in pairs. For this first
activity, you can choose the partner that you want to work with. However,
you must work with a partner. There is no prize for getting the activity
done first nor do you get to go home immediately after you are done. So
try not to rush through these activities; if you rush, you may miss the
point of the activity. They are also not graded nor do they need to be
submitted. For this one, I would ask that you choose the student with the
least familiarity with coding to be the "driver". Get some help from the
Teaching Fellow if needed. - Ken Loomis

## Part I
Start today’s lab by performing some simple operations using the CS50
IDE to get familiar with it. Try each of these commands.tasks at least
once to make sure that you are familiar with this new tool. When doing
each task, attempt to only use Bash commands whenever possible, so that
you become familiar with the command line interface (CLI).
1. Create a new folder within the workspace folder called "section1".
For files and folders in Linux you should not include spaces in the names.
2. Use the Bash command to "navigate" the terminal to that folder.
3. Create a new folder within the "section1" folder called "test".
4. Create a new file called "chat.c" within the "section1" folder.
create files that do not yet exist.
5. List the current directory in the terminal; you should just see the
folder and file you just created.
6. Use Bash commands to navigate into the "test" folder, list that
directory (it should be empty), and navigate out of the folder and back
into the "section1" folder.
7. Delete the "test" folder.
8. List the current directory again and you should see the folder is removed.

# Part II
Create a C program that mimics social interaction with a user. Use the
"chatbot.c" file that you created in Part I. The computer should pretend
to be person that asks a user questions and appears to interact with them.
An algorithm has been provided below which you should follow to perform
this mimicked interaction.

Start by first creating the common structure that you saw in all the C
programs from the last couple of lectures. (Hint do not copy-paste this,
practice typing it.) Try it first without looking at the next page to
see if you are able to get all the things you need.

Type this as the starting point for chat.c:
```C
#include <stdio.h>
#include <cs50.h>


/**
  * Description of the program here.
  */
int main ( void )
{
        return 0;
}
```

Be sure to change the comment with describes the program to something
meaningful to this particular program. Do not simply leave it as is.

Be sure to test the program the way it is to ensure you wrote all the
necessary code from above. Compile the program using "make" and execute
the compiled file. It should actually do nothing. As long as you don’t
get an errors, then you know that the starting structure is syntactically
correct.

Notice that in the below algorithm, I have indicated the identifiers
(variables) by bolding and italicizing them. Determine the data types of
each and declare them within and at the very top of the main function.
Declaring all variables used in the function at the top of a function is
a useful way of keeping track of the data used.

Start implementing the following algorithm in C code. There are multiple
ways of converting this algorithm to C, so don’t be concerned overly much
if yours doesn’t match the group next to you. Also, don’t try to code it
all at once. Do a few lines, test them, and then move on only when they work.

```
Output "Hello, my name is Ken."
Output "What is your name?"
Store input as name
Output "It’s nice to meet you, name!"
Output "What color eyes to you have?"
Store input as eyeColor
Output "My eyes are also eyeColor, what a coincidence."
Output "How old are you?"
Store input as age
Set computerAge = age + 2
Output "Wow, we are almost the same age."
Output "I am computerAge years old."
Output "I need to get a byte to eat. I’ll talk to you later."
```

## Part III
Now that you have a simple (albeit creepy) chat bot created, let’s modify
it a little bit. The segment where the bot asks the user for their age
should have different responses based on the input.

```
Here is the original algorithm again:
Output "How old are you?"
Store input as age
Set computerAge = age + 2
```

Modify the code so that when the user enters in an age that is less than 2
years old then computer should respond with "Is that even possible.". When
the user enters an age greater than 120 then the computer should respond
with "Wow. I think you might be the oldest person on earth." Otherwise, the
computer should respond with the original response we created.
Part IV
In our last modification of the chat bot. We will validate some user input
a little bit. The CS50 library already checks the data types for you, so when
the user enters a string when we expect and integers they will automatically
be prompted for a new integer. However, what if we want to handle other ba
inputs.

Create an input trap where the user enters their age. An input trap just
repeats a set of instructions involving user input until the user gives the
computer what they want. It is a loop that effectively traps the user in
place.

Implement the following input trap:
```
Repeat until 0 < age ≤ 150:
Output "How old are you?"
        Store input as age
```

This really just means keep asking the user to enter an age until you get
an integer greater than 0, but less than or equal to 150. As a hint, there
is no "repeat until" loop in C as we saw in Scratch. There are again a few
different ways that this may be implemented, but use the way that works best
for you.