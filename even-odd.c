#include <stdio.h>

int main ()
{
    int num;
    printf (" Enter a number");
    scanf ( "%d", &num);

    while ( 0 <= num)
    {
        if ( num %2 == 0)
        {
            printf ("%d  is even\n", num);
        }

        else 
        {
            printf ("%d is odd\n", num);
        }
            num = num - 1;
        }

    return 0;

    
}