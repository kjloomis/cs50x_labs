#include<stdio.h>
#include<cs50.h>
#include<string.h>

void insertionSort( int array[], int size );
void printArray ( int array [], int size );
void printClusters ( int array [], int size, int cluster [], int csize );

/**
 * nndev.c
 *
 * Collects a series of random numbers from user input and stores
 * them in an array. Sorts the numbers and determines the
 * maximum nearest neighbor deviation of the set of numbers.
 *
 * Determines the cluster cutoff points and uses those to cluster
 * the numbers in groups. Prints each cluster.
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_lecturecode)
 */
int main ( void )
{
    const int CAPACITY = 100;
    const int BOUNDARY = 200;
    int numList [ CAPACITY ];
    int clusters [ CAPACITY ];
    int count = 0;
    int clusterCnt = 0;
    int maxNNDev = 0;
    int num;

    num = get_int ( "Enter a number: " );
    while ( count < CAPACITY && num > 0 )
    {
        numList [ count++ ] = num;
        num = get_int ( "Enter a number: " );
    }

    //printArray ( numList, count );
    insertionSort ( numList, count );
    //printArray ( numList, count );

    for ( int i=1; i<count; i++ )
    {
        int diff = numList [ i ] - numList [ i-1 ];
        if ( diff > BOUNDARY )
        {
            clusters [ clusterCnt++ ] = i;
        }
        if ( diff > maxNNDev )
        {
            maxNNDev = diff;
        }
    }

    printf ( "Smallest: %i\n", numList[0] );
    printf ( "Largest: %i\n", numList[count-1] );
    printf ( "NN deviation: %i\n", maxNNDev );

    printClusters ( numList, count, clusters, clusterCnt );

    return 0;
}

/**
 * Sorts the contents of an array using the
 * insertion sort algorithm.
 */
void insertionSort( int array[], int size )
{
    for ( int i=1; i<size; i++ )
    {
        int x = array[i];
        int j = i-1;
        while (j >= 0 && array[j]>x )
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1]=x;
    }
    return;
}

/**
 * Outputs the contents of an array given the
 * length of the array contents to display.
 */
void printArray ( int array [], int size )
{
    printf ( "Array = { %i", array[0] );
    for ( int i=1; i<size; i++ )
    {
        if ( i %10 == 0 )
            printf ( ",\n\t%i", array[i] );
        else
            printf ( ", %i", array[i] );
    }
    printf ( " }\n" );
}

/**
 * Prints the clusters of numbers using the cutpoints found in the
 * given cluster array.
 */
void printClusters ( int array [], int size, int cluster [], int csize )
{
    printf ( "Cluster = { %i", array[0] );
    int c=1;
    for ( int i=1, j=0; i<size; i++ )
    {
        if ( j<csize && cluster[j]==i )
        {
            printf ( " }\nCluster = { %i", array[i] );
            c=0;
            j++;
        }
        else if ( c%10 == 0 )
            printf ( ",\n\t%i", array[i] );
        else
            printf ( ", %i", array[i] );
        c++;
    }
    printf ( " }\n" );
}