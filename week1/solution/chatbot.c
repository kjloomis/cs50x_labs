#include<cs50.h>
#include<stdio.h>

/**
 * chat.c
 *
 * This is a program that mimics social interaction with a user.
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_lecturecode)
 */
int main ( void )
{
    string name, eyeColor;
    int age, computerAge;

    printf ( "Hello, my name is Ken.\n" );
    name = get_string ( "What is your name? " );
    printf ( "It's nice to meet you, %s!\n", name );
    eyeColor = get_string ( "What color eyes to you have? " );
    printf ( "My eyes are also %s, what a coincidence.\n", eyeColor );

    // Input trap - allowed ages: 0 < age <= 150
    do
    {
        age = get_int ( "How old are you? " );
    } while ( age <= 0 || age > 150 );

    // Output different responses based on age.
    if ( age < 2 )
    {
        printf ( "Is that even possible?\n" );
    }
    else if ( age > 120 )
    {
        printf ( "Wow. I think you might be the oldest person on earth.\n" );
    }
    else
    {
        computerAge = age + 2;
        printf ( "Wow, we are almost the same age.\nI am %i years old.\n", computerAge );
    }

    printf ( "I need to get a byte to eat. I’ll talk to you later.\n" );

    return 0;
}