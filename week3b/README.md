# Week 3B - Filter

Remember that each week you will be given a hands-on activity that should
be done using pair programming. This week you will be randomly assigned a
partner from the list of students in your section. Find your partner and
use pair programming to solve the problem. I would suggest that you choose
the student with the least familiarity with coding to be the "driver".
Get some help from the Teaching Fellow if needed. - Ken Loomis

## Part I
Your task for this hands-on activity is to create a program which will
filter some array so that only numbers of interest will remain in the
array. You will be using some code idea that we saw in the past week and
will be given a starting file ("filter.c") for this activity.

Remember to use the concepts that we learned from the last couple of
classes on how to use recursive functions and how to read data from a file.

First create a new data type that represents the number list (a list of
positive numbers). This should include an integer array of size CAPACITY,
an integer of the count of numbers in the array. You should be able to
find the code on line 7 which starts the declaration of this new data type.

```C
typedef struct
{
    // TODO - Task #1
}
numberList;
```

When we actually perform the filtering task, we will filter the results within
the same numberList variable.Declare a variable (of type numberList) in the
main function which will hold the numbers that you intend to filter later.
There are comments to indicate the placeholder for this variable.

Complete the rest of the code in main and in printList which will be necessary
to enter the numbers using standard input and output the numbers in a list to
the screen using standard output. You will find much of the code is already
written, you just must replace the ???? with the proper code segment.

## Part II
At the bottom of the file is the start of a function which you must define
recursively. Determine if a number is evenly divisible by another number
without using the modulus operator (remainder) or division. For instance
to determine if a given number 11 is divisible by 3, you would call this
function thusly…

```C
    isDivisible ( 11, 3 );
```

Remember that every recursive function should have at least one base case
and should have at least one recursive case. Hint: the base case is what
tells the recursive function to stop.

For the example above we should produce "false" as it is not evenly
divisible. We can can see that in this example:

```
    11 / 3 = 3 R 2         OR

    11 - 3 = 8, 8 - 3 = 5, 5 - 3 = 2, 2 - 3 = -1
```

since -1 is less than 0, then 11 cannot be evenly divisible by 3.

Create another function called "filterList" which will accept a numberList
and an integer. It should filter out any values that are not evenly divisible
by the given number from the list. To call this function we might write
something like the code below. The function should update the given list
so it would only contain numbers divisible by 3.

```C
    filterList ( &aList, 3 );
```

Since we are about the modify the given list, we should pass in the address
of the list into the function. That means the parameter for the function
should be a pointer to a numberList. You can find a starting point for this
function at the bottom of the file.

HINT!: It would probably be easiest when filtering the array to move put
the filtered values in a temporary array (of the same size) as you are
filtering. Then simply put the all numbers from the temporary array back
into the original array and update the count.

Be sure to modify main so that you are filtering the numberList and
printing out the new filtered list.

## Part III (Extra Challenge)
The last extra challenge part of this activity is to implement a function
which will accept a list of numbers from a file and enter them into the
numberList. This would be better to test large amounts of numbers and would
not require us to use redirected input. Create a function called "loadNumbers"
which will get the numbers from a file and put them into the list. You can
use the same file with the list of number from last week’s activity to test
this new function.

Here's an algorithm which should make this task easier…
```
loadNumbers ( list, filename )
    Open a file with filename for reading as fin
    If fin doesn’t exist or list is full then
        Exit the function
    End if
    Loop while fin contains more data and list is not full
        Read number from the file
        If number was read then
            Enter number into list
        End if
    End loop
    Close fin
End function
```

Remember some of the syntax we saw in the attendanceDB.c example from class about getting data from a file.
```FILE*``` is the datatype of a file pointer.
```fopen``` is the function to open a file.
```fclose``` is the function to close a file.
```fscanf``` is the way we can read data from a file.