# Week 3 - Nearest Neighbor Deviation

Remember that each week you will be given a hands-on activity that should be
done using pair programming. This week you will be randomly assigned a partner
from the list of students in your section. Find your partner and use pair
programming to solve the problem. I would suggest that you choose the student
with the least familiarity with coding to be the "driver". Get some help from
the Teaching Fellow if needed. - Ken Loomis

## Part I
Your task for this week is to create a program that will collect an unknown
number of randomly generated numbers positive integers. The user will enter
the numbers in one at a time and will indicate that there are no more numbers
by entering a negative number. You will never be given more than 100 numbers
and you may assume these numbers will "fit" within a standard int in C (i.e
they will never be greater than 2 billion). A negative value marks the end
of the input.

The purpose of this program ("nndev.c") is to determine how random the set
of numbers really is. However, in order to do this analysis (in part 2) the
numbers need to be sorted. Your task is to sort the random numbers and output
the following output as a result (where ? is an actual number from the set).
Output the smallest and largest numbers from the set (hint: the first and
last elements in the sorted array) as a way of quickly checking if the array
is sorted.

Example Execution:
```
Enter a number: ?
Enter a number: ?
...
Smallest number: ?
Largest number: ?
```

Here is an algorithm to help you do this first part. Implement one of the 3
sorting algorithms we discussed in class to do the sorting.

```
Set numList to be an array of size 100.
Output "Enter a number: "
Store input as num
Loop while num > 0
        Add num to numList.
Output "Enter a number: "
Store input as num
End loop
Sort numList
Output "Smallest: ", first element in numList
Output "Largest: ", last element in numList
```

## Part II
One way of determining  the distribution of a set of numbers is by examining
the nearest neighbor deviation (NN deviation). This is a special measure of
the deviation of the numbers in the set. For instance we may conclude that a
set of numbers is well-distributed if the maximum nearest neighbor deviation
is less than some expected value.

For a 100 generated random numbers (between 1 and 10,000): when sorted the
maximum difference between 2 neighboring numbers must not be greater than 1000.
That would suggest the largest gap between nearest neighbors is no more than
10% of the range.

Example:
Here is an example set of random numbers:
```        403 9321 2345 9479 4923```

If we sort them we have:
```        403 2345 4923 9321 9479```

And if we compare the difference between the neighboring numbers we get:
```
        2345 – 403 = 1942
        4923 – 2345 = 2578
        9321 – 4923 = 4398  <-- This is the largest nearest neighbor deviation
        9479 – 9321 = 158   <-- This is the smallest nearest neighbor deviation
```

Add the code which implements the following algorithm to your program,
so that you will also output the NN deviation.

```
Set maxNNDev = 0
For each number in numList (except the last one)
        Set diff = difference between number and the next in the array.
        If diff > maxNNDev then
                Set maxNNDev = diff
        End if
End loop
Output "NN deviation: maxNNDev"
```

Your teaching fellow will provide you with an additional data file (testfile1.dat)
which contains a set of numbers that you can use to test your program using the
redirection technique.

### Part III (Extra Challenge)
We can also use nearest neighbor deviation to determine natural groups which
form in a set of numbers through a process called clustering. Using a maximum
deviation value of 200 to determine how many clusters of numbers appear in a
set of numbers. (There is no helpful algorithm for this one; however the
process is similar to the algorithm in Part II.) When determining the difference
between two neighbors, if the deviation is greater than 200, then you have
discovered a boundary between two clusters.

Either…
* Count the number of clusters (if less comfortable), and output the number
of clusters in the set of numbers.
* Or create an array which maintains the positions of the boundaries between
the clusters (more comfortable) and output the values of the largest numbers
within each cluster.