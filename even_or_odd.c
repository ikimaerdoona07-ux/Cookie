#include <stdio.h>
int main ()
{
    /*Count from number 0 to n. Check if each number is odd or even.*/ 

    int start;
    int end;

    start = 0;
    end = 10;

    
    while ( start <= end)
    {
        if ( start % 2 == 0)
        {
            printf ("your number %d is even\n\n", start);
        
        }
         else 

         {
            printf (" your number %d is odd\n\n", start);
         }

         start = start + 1;
    }



    return (0);

}