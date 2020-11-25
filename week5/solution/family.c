#include<stdlib.h>

#define MAX_CHILDREN 5

/**
 * family.c
 *
 * Creates a family tree of 4 people to show the interconnectivity
 * of a family tree structure.
 *
 * @author Ken Loomis (https://github.com/kjloomis/cs50x_labs)
 */

typedef struct person
{
    char *name;
    char *birthday;
    struct person *spouse;
    struct person *children [MAX_CHILDREN];
    int childCnt;
}
person;

person* makePerson ( char* name, char* birthday );

int main ( )
{

    person *me = makePerson ( "Ken Loomis", "2/8/80" );
    person *spouse = makePerson ( "My Spouse", "1/26/76");
    me->spouse = spouse;

    person *dad = makePerson( "My Dad", "3/16/56");
    dad->children[dad->childCnt++] = me;
    person *mom = makePerson( "My Mom", "6/6/57");
    mom->children[mom->childCnt++] = me;

    return 0;
}

/**
 * Makes a person structure which is a single node
 * in a larger family tree.
 */
person* makePerson ( char* name, char* birthday )
{
    person *aPerson = (person*) malloc ( sizeof (person) );
    aPerson->name = name;
    aPerson->birthday = birthday;
    aPerson->spouse = NULL;
    for ( int i=0; i<MAX_CHILDREN; i++ )
    {
        aPerson->children[i] = NULL;
    }
    aPerson->childCnt=0;
    return aPerson;
}