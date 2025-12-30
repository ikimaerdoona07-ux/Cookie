#include <stdio.h>
int main ()
{
int age;
printf (" Enter your age=");
scanf  ("%d", &age);

if ( age <13)
{
    printf ( " You are a child\n");
}
else if (age >= 13 && age <= 19)
{
    printf (" You are a teenager\n");
}
else if ( age >= 20 && age <= 25)
{
    printf (" You are in your early 20's\n");
}
else if ( age >= 26 && age <= 29)
{
    printf (" You are in your late 20's\n");
}


else 
{ 
    printf (" You are in your 30's\n");
}

return 0;
}