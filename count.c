#include <stdio.h>

int main ()

{  
    int start;
    int end;

    start = 0;
    end = 10;

    while (start <= end)
    {
        printf ("your number is %d\n\n",start);
        start = start + 1;
    }


    printf (" This is the end");

    return (0);

}