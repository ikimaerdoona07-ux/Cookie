#include <stdio.h>


int main ()
{
    int start;
    int end;


    start = 10;
    end = 20;

    
    while (start <= end)
{
    if ( start % 2 == 0)
    {
        printf ( "your number %d is blue\n\n", start);


    }

    else 
{
    printf ( " your number %d is berry\n\n", start);
}
    start = start + 1;
    
}

    return (0);

}