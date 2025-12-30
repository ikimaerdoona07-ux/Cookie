#include <stdio.h>

int main()
{
 char Letter;

 printf ("enter a letter=");
 scanf ("%c", &Letter);

 if (Letter >= 65 && Letter <=90)

{
    printf ("%c is a capital letter. I will now convert\n", Letter);

    Letter = Letter + 32;

    printf ("%c is now a small letter\n",Letter);
}
else if (Letter >= 'a' && Letter <= 'z')
{
    printf ( " %c is a small letter. I will now convert\n", Letter);

    Letter = Letter - 32;
    
    printf (" %c is now a capital letter\n", Letter);
}
 else
 {
    printf ( "%c is not an alphabet\n",Letter);
 }

 return 0;

}
