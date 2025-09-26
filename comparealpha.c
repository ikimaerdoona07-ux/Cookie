#include <stdio.h>

int main ()
{
    char char1;
    char char2;


    char1 = 'A';
    char2 = 'Z';

    if (char1 > char2)
    {
        printf ("%c is greater than %c", char1, char2);
    }
    else if (char1 < char2)

    {
        printf ( " %c is less than %c", char1, char2);
    }

    else 
    {
        printf ( "We do not know");
    }
    return (0);

}