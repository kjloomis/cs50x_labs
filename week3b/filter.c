#include<stdio.h>
#include<cs50.h>

#define CAPACITY 100

typedef struct
{
    // TODO - Task #1
}
numberList;

void printList ( numberList list );
// bool isDivisible ( int number, int divisor );
// void filterList ( numberList *list, int divBy );

/**
 * Creates an array of integers based upon user input.
 * Filters the array so only numbers that are evenly
 * divisable by a given integer will remain.
 */
int main ( void )
{

    // Declare the list to be filtered here.


    int num = get_int ( "Enter a number: " );
    while ( ???? < CAPACITY && num > 0 )
    {
        ???? [ ???? ] = num;
        ?????++;
        num = get_int ( "Enter a number: " );
    }

    printList ( ???? );

    // filterList ( &aList, 3 );
    // printList ( ???? );

    return 0;
}

/**
 * Outputs the contents of a numberList.
 * Author: Ken Loomis
 */
void printList ( numberList list )
{
    // Print the first element here.
    printf ( "List = { %i", ???? );

    // Loop through the rest of the elements to print
    // them one at a time.
    for ( int i = 1; i < ???? ; i++ )
    {
        // For every 10th elment include a line break.
        if ( i %10 == 0 )
            printf ( ",\n\t%i", ???? );
        else
            printf ( ", %i", ???? );
    }
    printf ( " }\n" );
}

// bool isDivisible ( int number, int divisor )
// {
//     // TODO - Part II

//     return true;
// }

// void filterList ( numberList *list, int divBy )
// {
//     // TODO - Continue Part II

//     return;
// }
