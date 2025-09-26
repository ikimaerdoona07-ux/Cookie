#include <stdio.h>

int main ()
{
    /*This is a comment*/


    /* Formula for calculating speed. Speed = Distance/time*/

    int dist;
    int time;
    int speed;

    double cel;
    double fr;

    /* Formula for converting celsius to fahrenheit. Fahrenheit = (Celsius * 9/5) +32*/

    cel = 95;
    fr = ((cel *(9/5)) + 32);

    

    dist = 20;
    time = 5;

    speed = dist/time;

    printf ( "the spped is %d\n\n", speed);
    printf ("Fahrenheit is equals %f", fr );
    
    return (0);
}