#include<stdio.h>
#include<cs50.h>
#include<string.h>

void printArray ( float array [], int size );

/**
 * scores.c
 *
 * Collects up to 10 homework scores from the user. These
 * scores should be between 0 and 100 (decimal numbers allowed).
 * The scores are printed as well as statistics about the scores
 * as long as there is at least one score entered. Enter a
 * negative number to stop entering scores.
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_lecturecode)
 */
int main ( void )
{
    const int CAPACITY = 10;
    float scores [ CAPACITY ];
    int count = 0;
    float num;

    do
    {
        num = get_float ( "Enter a score: " );
        if ( num > 100 )
        {
            printf ( "Invalid Entry! " );
        }
        else if ( num >= 0 )
        {
            scores [ count++ ] = num;
        }
    }
    while ( count < CAPACITY && num >= 0 );

    printArray ( scores, count );

    float max, min, total;
    max = min = total = scores[0];
    for ( int i=1; i<count; i++ )
    {
        if ( max < scores[i] )
        {
            max = scores[i];
        }
        if ( min > scores[i] )
        {
            min = scores[i];
        }
        total += scores[i];
    }

    // Must have at least 1 score to print these
    if ( count > 0 )
    {
        printf ( "Highest: %.2f\n", max );
        printf ( "Lowest: %.2f\n", min );
        printf ( "Average: %.2f\n", total/count);
    }

    // Must have at least 2 scores to drop 1 score.
    if ( count > 1 )
    {
        printf ( "Dropped Average: %.2f\n", (total-min)/(count-1) );
    }

    return 0;
}

/**
 * Outputs the contents of an array given the
 * length of the array contents to display.
 */
void printArray ( float array [], int size )
{
    printf ( "Scores:\n" );
    for ( int i=0; i<size; i++ )
    {
        printf ( "%7.2f\t", array[i] );
    }
    printf ( "\n" );
}
