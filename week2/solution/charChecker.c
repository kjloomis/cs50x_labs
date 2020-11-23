#include<cs50.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>

/**
 * charChecker.c
 *
 * Counts the characters in a given portion of text and outputs
 * the number of uppercase, lowercase, digit, end punctuation,
 * spaces, and other characters.
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_lecturecode)
 */
int main ( void )
{
    string text;
    int upper, lower, nums, punc, space, other, length;
    upper = lower = nums = punc = space = other = 0;

    do
    {
        text = get_string ( "Enter the text: " );
        length = strlen ( text );
    } while ( length < 5 );

    for ( int i=0; i<length; i++ )
    {
        if ( isupper(text[i]) )
        {
            upper++;
        }
        else if ( islower(text[i]) )
        {
            lower++;
        }
        else if ( islower(text[i]) )
        {
            lower++;
        }
        else if ( isdigit(text[i]) )
        {
            nums++;
        }
        else if ( text[i]=='.' || text[i]=='?' || text[i]=='!' )
        {
            punc++;
        }
        else if ( text[i]==' ' )
        {
            space++;
        }
        else
        {
            other++;
        }
    }

	printf ( "\tUppercase: %i\n", upper );
	printf ( "\tLowercase: %i\n", lower );
	printf ( "\tNumbers: %i\n", nums );
	printf ( "\tEnd Punctuation: %i\n", punc );
	printf ( "\tSpaces: %i\n", space );
	printf ( "\tOther: %i\n", other );

    return 0;
}