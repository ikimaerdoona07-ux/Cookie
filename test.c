#include <stdio.h>

int main ()
{
int my_age;
char letter;
int *my_age_ad;
char *letter_ad;



my_age = 25;
letter = 'a';

my_age_ad = &(my_age);
letter_ad = &(letter);

// if (my_age >= 18)
// {
//     printf ("you are an adult");

    
// }

// else
// {
//     printf ("you are a child");
// }

printf("the address is %p\n", my_age_ad);
printf("the address is %p\n", letter_ad);


    return (0);
}